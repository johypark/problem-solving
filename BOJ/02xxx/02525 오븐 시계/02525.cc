#include <iostream>

using namespace std;

class Time {
private:
  int minute;

public:
  Time(int minute) {
    minute %= 24 * 60;
    this->minute = minute;
  }

  Time(int hour, int minute) : Time(hour * 60 + minute) {}

  Time operator+(const Time &time) {
    int minute = this->minute + time.minute;

    return Time(minute);
  }

  friend ostream &operator<<(ostream &os, const Time &time);
};

ostream &operator<<(ostream &os, const Time &time) {
  os << time.minute / 60 << ' ' << time.minute % 60;
  return os;
}

int main() {
  int a, b;
  cin >> a >> b;

  Time startTime(a, b);

  int c;
  cin >> c;

  cout << startTime + Time(c) << endl;
}
