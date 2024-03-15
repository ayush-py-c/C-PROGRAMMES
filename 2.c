#include <stdio.h>


struct Date {
    int day;
    int month;
    int year;
};


int dateDifference(struct Date d1, struct Date d2) {
    
    int days1 = d1.year * 365 + d1.month * 30 + d1.day;
    int days2 = d2.year * 365 + d2.month * 30 + d2.day;

    
    int difference = (days1 > days2) ? (days1 - days2) : (days2 - days1);

    return difference;
}

int main() {
    
    struct Date date1;
    printf("Enter the first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    
    struct Date date2;
    printf("Enter the second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    
    int diff = dateDifference(date1, date2);

    
    printf("The difference between the two dates is %d days.\n", diff);

    return 0;
}
