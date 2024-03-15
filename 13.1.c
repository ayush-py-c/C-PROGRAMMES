#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int n;
    // scanf("%d",&n);
    int a [10];
    int count = 0;
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            a[count] = j;
            count++;
            // printf("%d",count);
        }
        // printf("%d",i);
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", a[i]);
    }


    return 0;
}