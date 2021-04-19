// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

size_t GetApocalypseNumber(size_t n) {
  size_t count = 0;
  size_t number = 0;
  size_t times, dividend;

  while (count < n) {
    times = 0;
    dividend = ++number;

    while (dividend > 0) {
      if (dividend % 10 == 6) {
        if (++times == 3) {
          count++;
          break;
        }
      } else {
        times = 0;
      }

      dividend /= 10;
    }
  }

  return number;
}

int main(int argc, char* argv[]) {
  size_t n;

  std::cin >> n;

  std::cout << GetApocalypseNumber(n) << std::endl;
}
