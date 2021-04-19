// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>
#include <stdlib.h>

double get_average_sejun(const size_t* scores, size_t length) {
  size_t sum = 0, max = 0;
  double average;

  for (size_t i = 0; i < length; i++) {
    if (max < scores[i]) max = scores[i];
    sum += scores[i];
  }

  average = 1.0 * sum / length;
  return average / max * 100;
}

int main(int argc, char* argv[]) {
  size_t n;
  size_t* scores;

  scanf(" %zu", &n);

  scores = malloc(sizeof(size_t) * n);
  for (size_t i = 0; i < n; i++) scanf("%zu", &scores[i]);

  printf("%f\n", get_average_sejun(scores, n));

  free(scores);
}
