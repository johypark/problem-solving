#include <array>
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  array<int, 5> answers;
  int count = 0;
  for (int &answer : answers) {
    cin >> answer;
    count += answer == t;
  }

  cout << count << endl;
}
