#include <stdio.h>

int main() {
    int n = 5;
    int start = 15; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i % 2 == 0) {
                printf("%2d ", start - j);
            } else {
                printf("%2d ", start + j);
            }
        }
        printf("\n");
        start -= i + 1; 
    }

    return 0;
}