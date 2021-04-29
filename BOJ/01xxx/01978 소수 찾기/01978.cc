// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <cmath>
#include <iostream>
#include <vector>

enum { MAX_NUMBER = 1000 };

std::vector<bool> Eratos(size_t n) {
  size_t sqrt_n = sqrt(n);

  std::vector<bool> eratos(n + 1);
  for (size_t i = 2; i <= n; i++) eratos[i] = true;

  for (size_t i = 2; i <= sqrt_n; i++)
    if (eratos[i]) {
      for (size_t j = i * i; j <= n; j += i) eratos[j] = false;
    }

  return eratos;
}

int main(int argc, char* argv[]) {
  size_t n, number;
  size_t count = 0;

  std::cin >> n;

  std::vector<bool> is_prime = Eratos(MAX_NUMBER);

  for (size_t i = 0; i < n; i++) {
    std::cin >> number;
    if (is_prime[number]) count++;
  }

  std::cout << count << std::endl;
}
