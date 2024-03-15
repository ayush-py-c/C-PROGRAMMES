#include <stdio.h>
int main()
{
    int a,i=1;
    float s=0,fact=1;
    scanf("%d",&a);
    while (i<=a)
    {
        fact*=i;
        s+=fact/i;
        i++;
    }
    printf("%f",s);
}
