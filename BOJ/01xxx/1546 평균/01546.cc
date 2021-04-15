// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <vector>

double GetAverageSejun(const std::vector<size_t>& scores) {
  size_t sum = 0, max = 0;
  double average;

  for (const size_t& score : scores) {
    if (max < score) max = score;
    sum += score;
  }

  average = 1.0 * sum / scores.size();
  return average / max * 100;
}

int main(int argc, char* argv[]) {
  size_t n;

  std::cin >> n;

  std::vector<size_t> scores(n);
  for (size_t& score : scores) std::cin >> score;

  std::cout << GetAverageSejun(scores) << std::endl;
}
