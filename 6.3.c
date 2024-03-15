#include<stdio.h>
int main()
{
    int n=0,a;
    scanf("%d",&a);
    
    
    while (n<=a/2)
    {
        n++;
        
        (a%n==0)?printf("%d\n",n):0;

    }
    
    return 0;
}
