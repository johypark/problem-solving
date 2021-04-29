// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <cmath>
#include <iostream>
#include <vector>

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
  size_t n, m;

  std::cin >> m >> n;

  std::vector<bool> is_prime = Eratos(n);
  for (size_t i = m; i <= n; i++)
    if (is_prime[i]) std::cout << i << '\n';
}
