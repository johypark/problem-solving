#include <iostream>

using namespace std;

int main() {
  int limit, speed;
  cin >> limit >> speed;

  if (speed <= limit) {
    cout << "Congratulations, you are within the speed limit!" << endl;
  } else {
    int diff = speed - limit;
    int f;
    if (diff <= 20)
      f = 100;
    else if (diff <= 30)
      f = 270;
    else
      f = 500;

    cout << "You are speeding and your fine is $" << f << '.' << endl;
  }
}
