// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

char GetGrade(size_t score) {
  if (score >= 90) return 'A';
  if (score >= 80) return 'B';
  if (score >= 70) return 'C';
  if (score >= 60) return 'D';

  return 'F';
}

int main(int argc, char* argv[]) {
  size_t score;

  std::cin >> score;

  std::cout << GetGrade(score);
}
