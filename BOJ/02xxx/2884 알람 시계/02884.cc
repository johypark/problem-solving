// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <iostream>

enum { EARLY_MINUTE = 45 };

class Time {
 private:
  size_t minute_;

 public:
  explicit Time(size_t minute);
  Time(size_t hour, size_t minute);
  Time operator-(const Time& time);
  friend std::ostream& operator<<(std::ostream& ostream, const Time& time);
};

Time::Time(size_t minute) {
  minute %= 24 * 60;
  minute_ = minute;
}

Time::Time(size_t hour, size_t minute) : Time(hour * 60 + minute) {}

Time Time::operator-(const Time& time) {
  size_t minute = minute_ + 24 * 60 - time.minute_;
  minute %= 24 * 60;

  return Time(minute);
}

std::ostream& operator<<(std::ostream& ostream, const Time& time) {
  ostream << time.minute_ / 60 << ' ' << time.minute_ % 60;
  return ostream;
}

int main(int argc, char* argv[]) {
  size_t h, m;

  std::cin >> h >> m;
  Time wake_up_time(h, m);

  std::cout << wake_up_time - Time(EARLY_MINUTE) << std::endl;
}
