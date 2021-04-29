// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef size_t Element;

typedef struct {
  Element* data;
  size_t capacity;
  size_t size;
} Stack;

Stack* create_stack(size_t capacity) {
  Stack* stack = malloc(sizeof(Stack));

  stack->data = malloc(sizeof(Element) * capacity);
  stack->capacity = capacity;
  stack->size = 0;

  return stack;
}

void extend_stack(Stack* stack) {
  stack->capacity *= 2;
  stack->data = realloc(stack->data, sizeof(Element) * stack->capacity);
}

void free_stack(Stack* stack) {
  free(stack->data);
  free(stack);
}

bool is_stack_empty(Stack* stack) { return stack->size == 0; }

bool is_stack_full(Stack* stack) { return stack->size == stack->capacity; }

void check_stack_empty(Stack* stack) {
  if (is_stack_empty(stack)) {
    fprintf(stderr, "Stack is empty.\n");
    exit(EXIT_FAILURE);
  }
}

void push_stack(Stack* stack, Element element) {
  if (is_stack_full(stack)) extend_stack(stack);

  stack->data[stack->size++] = element;
}

Element pop_stack(Stack* stack) {
  check_stack_empty(stack);

  return stack->data[--stack->size];
}

Element peek_stack(Stack* stack) {
  check_stack_empty(stack);

  return stack->data[stack->size - 1];
}

void print_stack_log(const size_t* numbers, size_t length) {
  size_t count = 1;
  Stack* stack = create_stack(length);
  char* log = malloc(sizeof(char) * length * 2);
  size_t log_index = 0;

  for (size_t i = 0; i < length; i++) {
    // Push
    while (numbers[i] >= count) {
      push_stack(stack, count++);
      log[log_index++] = '+';
    }

    // Pop
    if (pop_stack(stack) != numbers[i]) {
      printf("NO\n");
      free_stack(stack);
      free(log);
      return;
    }

    log[log_index++] = '-';
  }

  for (size_t i = 0; i < length * 2; i++) printf("%c\n", log[i]);

  free_stack(stack);
  free(log);
}

int main(int argc, char* argv[]) {
  size_t n;
  size_t* numbers;

  scanf(" %zu", &n);

  numbers = malloc(sizeof(size_t) * n);
  for (size_t i = 0; i < n; i++) scanf(" %zu", &numbers[i]);

  print_stack_log(numbers, n);

  free(numbers);
}
