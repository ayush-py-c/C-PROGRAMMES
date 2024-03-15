#include <stdio.h>

int main() {
    int start_day, start_month, start_year;
    int end_day, end_month, end_year;
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days = 0;

    // Input start date
    printf("Enter the start date (dd mm yyyy): ");
    scanf("%d %d %d", &start_day, &start_month, &start_year);

    // Input end date
    printf("Enter the end date (dd mm yyyy): ");
    scanf("%d %d %d", &end_day, &end_month, &end_year);

    // Validate input
    if (start_year > end_year || (start_year == end_year && start_month > end_month) ||
        (start_year == end_year && start_month == end_month && start_day > end_day)) {
        printf("Invalid date input. Start date should be before end date.\n");
        return 1;
    }

    // Calculate days
    for (;;) {
        if (start_day == end_day && start_month == end_month && start_year == end_year) {
            break;
        }

        days++;

        start_day++;

        if (start_day > days_in_month[start_month]) {
            start_day = 1;
            start_month++;

            if (start_month > 12) {
                start_month = 1;
                start_year++;
            }
        }
    }

    printf("Number of days between the two dates: %d\n", days);

    return 0;
}