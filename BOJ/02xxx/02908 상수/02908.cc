// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

int GetNumberSangsu(int n) { return n / 100 + n / 10 % 10 * 10 + n % 10 * 100; }

int GetAnswerSangsu(int a, int b) {
  int a_sangsu = GetNumberSangsu(a);
  int b_sangsu = GetNumberSangsu(b);

  return a_sangsu > b_sangsu ? a_sangsu : b_sangsu;
}

int main(int argc, char* argv[]) {
  int a, b;

  std::cin >> a >> b;

  std::cout << GetAnswerSangsu(a, b) << std::endl;
}
