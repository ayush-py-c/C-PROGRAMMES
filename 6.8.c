#include<stdio.h>
int main()
{
    int x=0,a,d;
    scanf("%d",&a);
    int n=a;
    while (a>0)
    {
        x++;
        a/=10;
    }
    if (9==x)
    {
        n/=1000;
        d=n%1000;
    }
    else if (7==x)
    {
        n/=1000;
        d=n%1000;
    }
    else if (5==x)
    {
        n/=1000;
        d=n%1000;
    }
    
    else{
        d=n;
        printf("%d",n);

    }
    
    

    return 0;
}
