#include <stdio.h>

int main() {
    int year, firstDay;
    
    printf("Enter the year: ");
    scanf("%d", &year);
    
    printf("Enter the first day of the year (0=Sunday, 1=Monday, ..., 6=Saturday): ");
    scanf("%d", &firstDay);
    
    printf("\nCalendar for the year %d:\n\n", year);

    int month;
    int currentDay = firstDay;

    for (month = 1; month <= 12; month++) {
        printf("Month %d:\n", month);
        printf("Sun Mon Tue Wed Thu Fri Sat\n");

        // Print leading spaces for the first week
        for (int i = 0; i < currentDay; i++) {
            printf("    ");
        }

        int maxDays;

        // Calculate the number of days in the current month
        switch (month) {
            case 2:
                // February: Check for leap year
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    maxDays = 29;
                } else {
                    maxDays = 28;
                }
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                maxDays = 30;
                break;
            default:
                maxDays = 31;
        }

        // Print the days of the month
        for (int day = 1; day <= maxDays; day++) {
            printf("%3d ", day);

            // If it's the last day of the week, move to the next line
            if ((currentDay + day) % 7 == 0) {
                printf("\n");
            }
        }

        printf("\n");
        
        // Calculate the first day of the next month
        currentDay = (currentDay + maxDays) % 7;
    }

    return 0;
}