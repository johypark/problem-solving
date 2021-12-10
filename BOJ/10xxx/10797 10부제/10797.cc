#include <array>
#include <iostream>

using namespace std;

int main() {
  int day;
  cin >> day;

  array<int, 5> carNums;
  for (int &carNum : carNums)
    cin >> carNum;

  int count = 0;
  for (const int &carNum : carNums)
    if (carNum == day)
      count++;

  cout << count << endl;
}
