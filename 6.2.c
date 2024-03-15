#include<stdio.h>
int main()
{
    int a,b,n,add;
    a=1;
    b=100;
    while (a<100)
    {
        a++;
        
        (a%2==1)?add+=a:0;

    }
    printf("%d",add+1);
    return 0;
}
