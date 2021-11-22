#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, x;
  cin >> n >> x;

  vector<int> a(n);
  for (int &num : a) {
    cin >> num;

    if (num < x)
      cout << num << ' ';
  }

  cout << endl;
}
