//WAP to find the smallest number amoung the two numbers
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    if (a<b)
    {
        printf("%d is the smallest no. amoung two",a);

    }
    else{
        printf("%d is the smallest no. amoung the two",b);
    }
    return 0;
}
