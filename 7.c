#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int i = 1;
    while (i <= n) {
        sum += (double)(2 * i - 1) / (double)(2 * i);
        i++;
    }
    
    printf("Sum of the series is: %lf\n", sum);
    
    return 0;
}