#include <stdio.h>

typedef struct {
    int hour;
    int minute;
} Time;


void displayCurrentTime(Time currentTime) {
    printf("現在時刻: %02d:%02d\n", currentTime.hour, currentTime.minute);
}


void displayTimeAfter(Time currentTime, int hours, int minutes) {

    int totalMinutes = currentTime.hour * 60 + currentTime.minute;
    totalMinutes += hours * 60 + minutes;

    int hourAfter = totalMinutes / 60 % 24;
    int minuteAfter = totalMinutes % 60;

    printf("%d時間%d分後の時刻: %02d:%02d\n", hours, minutes, hourAfter, minuteAfter);
}

int main() {
    Time now = { 14, 30 }; 

    displayCurrentTime(now);

    displayTimeAfter(now, 3, 45);
    displayTimeAfter(now, 2, 15);

    return 0;
}
