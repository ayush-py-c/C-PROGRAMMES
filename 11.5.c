#include<stdio.h>
int main()
{
    long long num;
    printf("Enter number");
    scanf("%lld",&num);
    long long count = num;
    int num_digit=0;
    while (count!=0)
    {
        count/=10;
        num_digit++;
    }
    int digits[num_digit];
    count=num;
    int i =num_digit-1;
    while (count!=0)
    {
        digits[i]=count%10;
        count/=10;
        i--;

    }
    printf("digits in array : ");
    for ( i = 0; i < num_digit; i++)
    {
        printf("%d ",digits[i]);
    }
    
    
    return 0;
}
