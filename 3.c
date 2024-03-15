// Question No. 3- cheak leap year
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the year :");
    scanf("%d",&a);
    if ((a%4==0 && a%100!=0)|| a%400==0){
        printf("%d is a leap year.\n",a);

    }
    else{
        printf("%d is not a leap year",a);
    }
    
    return 0;
}
