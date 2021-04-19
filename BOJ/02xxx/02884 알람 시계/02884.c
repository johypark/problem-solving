// Copyright 2021 Johy. All rights reserved.
// Licensed under the MIT License.
// See LICENSE file in the project root for license information.

#include <stdio.h>

enum { EARLY_MINUTE = 45 };

typedef struct {
  size_t hour;
  size_t minute;
} Time;

Time get_alarm_time(Time wake_up_time, size_t early_minute) {
  Time alarm_time;
  size_t minute = wake_up_time.hour * 60 + wake_up_time.minute;

  // Calculate alarm time
  minute += 24 * 60 - early_minute;
  minute %= 24 * 60;

  alarm_time.hour = minute / 60;
  alarm_time.minute = minute % 60;

  return alarm_time;
}

int main(int argc, char* argv[]) {
  size_t h, m;
  Time wake_up_time;
  Time alarm_time;

  scanf(" %zu %zu", &h, &m);
  wake_up_time.hour = h;
  wake_up_time.minute = m;

  alarm_time = get_alarm_time(wake_up_time, EARLY_MINUTE);
  printf("%zu %zu\n", alarm_time.hour, alarm_time.minute);
}
