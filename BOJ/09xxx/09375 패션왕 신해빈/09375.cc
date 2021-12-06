#include <iostream>
#include <map>

using namespace std;

int main() {
  int t;
  cin >> t;

  int n;
  for (int i = 0; i < t; i++) {
    cin >> n;

    string attribute, category;
    map<string, int> categories;
    for (int j = 0; j < n; j++) {
      cin >> attribute >> category;
      categories[category]++;
    }

    int cases = 1;
    for (const auto &[category, count] : categories)
      cases *= count + 1;

    cout << --cases << '\n';
  }
}
