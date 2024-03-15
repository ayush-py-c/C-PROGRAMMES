#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the first digit: ");
    scanf("%d", &start);

    printf("Enter the second digit: ");
    scanf("%d", &end);

    printf("Numbers between %d and %d: ", start, end);

    // Ensure start is less than end
    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    int current = start + 1;  // Start with the number after the first digit

    while (current < end) {
        printf("%d ", current);
        current++;
    }

    printf("\n");

    return 0;
}