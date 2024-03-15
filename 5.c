//question no. 5 - find the day of given date
#include <stdio.h>

int main() {
    int day, month, year,b;

    printf("Enter date (dd/mm/yyyy)(b is the day of january): ");
    scanf("%d/%d/%d %d", &day, &month, &year,&b);

    int totalDays = day;

    // Add days of previous months
    if (month > 1) totalDays += 31;
    if (month > 2) totalDays += 28;
    if (month > 3) totalDays += 31;
    if (month > 4) totalDays += 30;
    if (month > 5) totalDays += 31;
    if (month > 6) totalDays += 30;
    if (month > 7) totalDays += 31;
    if (month > 8) totalDays += 31;
    if (month > 9) totalDays += 30;
    if (month > 10) totalDays += 31;
    if (month > 11) totalDays += 30;

    // Adjust for leap year
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2)
        totalDays++;

    int dayOfWeek = (totalDays % 7)+b-1;

    if (dayOfWeek == 0) printf("Sunday\n");
    else if (dayOfWeek == 1) printf("Monday\n");
    else if (dayOfWeek == 2) printf("Tuesday\n");
    else if (dayOfWeek == 3) printf("Wednesday\n");
    else if (dayOfWeek == 4) printf("Thursday\n");
    else if (dayOfWeek == 5) printf("Friday\n");
    else if (dayOfWeek == -1) printf("Saturday\n");

    return 0;
}