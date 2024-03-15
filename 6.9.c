#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num1,orgnum,firstdigit,lastdigit,snum=0,placev=1;
    printf("Enter the number : ");
    scanf("%d",&num1);
    orgnum=num1;
    lastdigit=num1%10;

    while (num1>=10)
    {
        num1/=10;
        placev*=10;

    }
    firstdigit=num1;
    snum=lastdigit*placev+orgnum%placev;
    snum=snum-lastdigit+firstdigit;
    printf("Number after swapped : %d\n",snum);   
    return 0;
}
