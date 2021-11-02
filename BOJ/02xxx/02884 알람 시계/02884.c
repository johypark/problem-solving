#include <stdio.h>

enum { EARLY_MINUTE = 45 };

typedef struct {
  int hour;
  int minute;
} Time;

Time get_alarm_time(Time wake_up_time, int early_minute) {
  Time alarm_time;
  int minute = wake_up_time.hour * 60 + wake_up_time.minute;

  // Calculate alarm time
  minute += 24 * 60 - early_minute;
  minute %= 24 * 60;

  alarm_time.hour = minute / 60;
  alarm_time.minute = minute % 60;

  return alarm_time;
}

int main(void) {
  int h, m;
  scanf("%d%d", &h, &m);

  Time wake_up_time;
  wake_up_time.hour = h;
  wake_up_time.minute = m;

  Time alarm_time = get_alarm_time(wake_up_time, EARLY_MINUTE);
  printf("%d %d\n", alarm_time.hour, alarm_time.minute);
}
