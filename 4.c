//Question No. 4 - Earliest Time
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int compareTimes(struct Time t1, struct Time t2) {
    if (t1.hours > t2.hours)
        return 1;
    else if (t1.hours < t2.hours)
        return -1;
    else {
        if (t1.minutes > t2.minutes)
            return 1;
        else if (t1.minutes < t2.minutes)
            return -1;
        else {
            if (t1.seconds > t2.seconds)
                return 1;
            else if (t1.seconds < t2.seconds)
                return -1;
            else
                return 0;
        }
    }
}

int main() {
    struct Time time1, time2;

    printf("Enter the first time (hh mm ss): ");
    scanf("%d %d %d", &time1.hours, &time1.minutes, &time1.seconds);

    printf("Enter the second time (hh mm ss): ");
    scanf("%d %d %d", &time2.hours, &time2.minutes, &time2.seconds);

    int comparison = compareTimes(time1, time2);

    if (comparison == 1) {
        printf("The greatest time is: %02d:%02d:%02d\n", time1.hours, time1.minutes, time1.seconds);
    } else if (comparison == -1) {
        printf("The greatest time is: %02d:%02d:%02d\n", time2.hours, time2.minutes, time2.seconds);
    } else {
        printf("Both times are equal.\n");
    }

    return 0;
}