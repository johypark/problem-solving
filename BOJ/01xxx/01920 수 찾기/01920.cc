// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <set>

int main(int argc, char* argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  size_t n, m;
  int number;

  std::cin >> n;

  std::set<int> a;
  for (size_t i = 0; i < n; i++) {
    std::cin >> number;
    a.insert(number);
  }

  std::cin >> m;
  for (size_t i = 0; i < m; i++) {
    std::cin >> number;
    std::cout << (a.find(number) != a.end()) << '\n';
  }
}
