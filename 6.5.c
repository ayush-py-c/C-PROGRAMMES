#include<stdio.h>
int main()
{
    int a,f=0,g=0,h=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0;
    scanf("%d",&a);
    
    
    while (a>0)
    {
        a++;
        
        int b=a%=10;
        if (b==0)
        {
            f++;
        }
        if (b==1)
        {
            g++;
        }
        if (b==2)
        {
            h++;
        }
        if (b==3)
        {
            j++;
        }
        if (b==4)
        {
            k++;
        }
        if (b==5)
        {
            l++;
        }
        if (b==6)
        {
            m++;
        }
        if (b==7)
        {
            n++;
        }
        if (b==8)
        {
            o++;
        }
        if (b==9)
        {
            p++;
        }

    }
    printf("frequency of digit is\n zero%d\n first%d\n second%d\n third%d\n four%d\n five%d\n six%d\n seven%d\n eight%d\n nine%d\n",f,g,h,j,k,l,m,n,o,p);
    return 0;
}
