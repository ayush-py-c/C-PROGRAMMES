#include <stdio.h>

int main() {
    int n = 4; 

    for (int i = -n; i <= n; i++) {
        for (int j = -n; j <= n; j++) {
            if (i * i + j * j <= n * n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}