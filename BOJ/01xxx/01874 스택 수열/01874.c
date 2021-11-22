#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef int Element;

typedef struct {
  Element *data;
  size_t capacity;
  size_t size;
} Stack;

Stack *create_stack(size_t capacity) {
  Stack *stack = malloc(sizeof(Stack));

  stack->data = malloc(sizeof(Element) * capacity);
  stack->capacity = capacity;
  stack->size = 0;

  return stack;
}

void extend_stack(Stack *stack) {
  stack->capacity *= 2;
  stack->data = realloc(stack->data, sizeof(Element) * stack->capacity);
}

void free_stack(Stack *stack) {
  free(stack->data);
  free(stack);
}

bool is_stack_empty(Stack *stack) { return stack->size == 0; }

bool is_stack_full(Stack *stack) { return stack->size == stack->capacity; }

void check_stack_empty(Stack *stack) {
  if (is_stack_empty(stack)) {
    fprintf(stderr, "Stack is empty.\n");
    exit(EXIT_FAILURE);
  }
}

void push_stack(Stack *stack, Element element) {
  if (is_stack_full(stack))
    extend_stack(stack);

  stack->data[stack->size++] = element;
}

Element pop_stack(Stack *stack) {
  check_stack_empty(stack);

  return stack->data[--stack->size];
}

Element peek_stack(Stack *stack) {
  check_stack_empty(stack);

  return stack->data[stack->size - 1];
}

void print_stack_log(const int *nums, int length) {
  const int LOG_LENGTH = length * 2;

  // Save log
  int count = 1;
  Stack *stack = create_stack(length);
  char *log = malloc(sizeof(char) * LOG_LENGTH);
  int log_index = 0;
  for (int i = 0; i < length; i++) {
    // Push
    while (nums[i] >= count) {
      push_stack(stack, count++);
      log[log_index++] = '+';
    }

    // Pop
    if (pop_stack(stack) != nums[i]) {
      printf("NO\n");
      free_stack(stack);
      free(log);
      return;
    }

    log[log_index++] = '-';
  }

  // Print log
  for (int i = 0; i < LOG_LENGTH; i++)
    printf("%c\n", log[i]);

  // Free
  free_stack(stack);
  free(log);
}

int main(void) {
  int n;
  scanf("%d", &n);

  int *nums = malloc(sizeof(int) * n);
  for (int i = 0; i < n; i++)
    scanf("%d", &nums[i]);

  print_stack_log(nums, n);

  free(nums);
}
