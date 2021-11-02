#include <iostream>

enum { EARLY_MINUTE = 45 };

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

  Time operator-(const Time &time) {
    int minute = this->minute + 24 * 60 - time.minute;
    minute %= 24 * 60;

    return Time(minute);
  }

  friend ostream &operator<<(ostream &os, const Time &time) {
    os << time.minute / 60 << ' ' << time.minute % 60;
    return os;
  }
};

int main() {
  int h, m;
  cin >> h >> m;

  Time wakeUpTime(h, m);
  cout << wakeUpTime - Time(EARLY_MINUTE) << endl;
}
