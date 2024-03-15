//Question no. 7 - check real and imaginary nature for the given coefficients of quadratic equation
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d;
    printf("a,b,c(ax^2+bx+c)");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0) {
        printf("it is real root");
    }
    else{
        printf("it is imaginary root");
    }

    return 0;
}
