#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a,i=1;
    float fact=1,j;
    scanf("%d",&a);
    // float k;
    // float sum = 0,d;
    while (i<=a)
    {
        fact=fact*i;
        j+=i/fact;
        
        
    }
    printf("%f",j);
    return 0;
}
