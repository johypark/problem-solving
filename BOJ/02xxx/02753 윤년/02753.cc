// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

bool IsLeapYear(size_t year) {
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int main(int argc, char* argv[]) {
  size_t year;

  std::cin >> year;

  std::cout << IsLeapYear(year) << std::endl;
}
