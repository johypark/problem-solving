// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <algorithm>
#include <iostream>
#include <vector>

size_t GetMaxCableLength(const std::vector<size_t>& cables, size_t n) {
  size_t left = 1;
  size_t right = *std::max_element(cables.begin(), cables.end());
  size_t mid = (left + right) / 2;
  size_t count;

  while (left <= right) {
    count = 0;

    for (const size_t& cable : cables) count += cable / mid;

    if (count >= n)
      left = mid + 1;
    else
      right = mid - 1;

    mid = (left + right) / 2;
  }

  return mid;
}

int main(int argc, char* argv[]) {
  size_t k, n;

  std::cin >> k >> n;

  std::vector<size_t> cables(k);
  for (size_t& cable : cables) std::cin >> cable;

  std::cout << GetMaxCableLength(cables, n) << std::endl;
}
