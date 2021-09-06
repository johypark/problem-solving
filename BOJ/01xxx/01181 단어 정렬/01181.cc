// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>
#include <set>
#include <string>

struct Compare {
  bool operator()(const std::string& a, const std::string& b) const {
    if (a.length() == b.length()) return a < b;
    return a.length() < b.length();
  }
};

int main(int argc, char* argv[]) {
  size_t n;

  std::cin >> n;

  std::set<std::string, Compare> words;
  std::string word;

  for (size_t i = 0; i < n; i++) {
    std::cin >> word;
    words.insert(word);
  }

  for (const auto& word : words) std::cout << word << '\n';
}
