#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main() {
  array<int, 3> burgers;
  for (int &burger : burgers)
    cin >> burger;

  array<int, 2> beverages;
  for (int &beverage : beverages)
    cin >> beverage;

  cout << *min_element(burgers.begin(), burgers.end()) +
              *min_element(beverages.begin(), beverages.end()) - 50
       << endl;
}
