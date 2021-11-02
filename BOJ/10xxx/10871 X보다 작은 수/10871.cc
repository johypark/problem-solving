#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for (int &number : a) {
    cin >> number;

    if (number < x)
      cout << number << ' ';
  }

  cout << endl;
}
