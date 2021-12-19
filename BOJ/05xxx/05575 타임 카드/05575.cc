#include <iostream>

using namespace std;

class Time {
private:
  int second;

public:
  Time(int second) {
    second %= 24 * 60 * 60;
    this->second = second;
  }

  Time(int hour, int minute, int second)
      : Time(hour * 60 * 60 + minute * 60 + second) {}

  Time operator-(const Time &time) {
    int second = this->second + 24 * 60 * 60 - time.second;

    return Time(second);
  }

  friend ostream &operator<<(ostream &os, const Time &time);
};

ostream &operator<<(ostream &os, const Time &time) {
  os << time.second / 60 / 60 << ' ' << time.second / 60 % 60 << ' '
     << time.second % 60;
  return os;
}

int main() {
  int h, m, s;
  for (int i = 0; i < 3; i++) {
    cin >> h >> m >> s;
    Time startTime(h, m, s);

    cin >> h >> m >> s;
    Time endTime(h, m, s);

    cout << endTime - startTime << '\n';
  }
}
