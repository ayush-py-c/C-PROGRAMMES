#include<stdio.h>

int main()
{
    char s[20];
    int count = 0;

    printf("Enter String : ");
    scanf("%s", s);

    for(int i = 0; i < 20; i++) {
        if(s[i] == 0) {
            break;
        }
        count ++;
    }
    printf("Index : %d\n", count);
    printf("Character ASCII: %d\n", s[count]);
    return 0;
}