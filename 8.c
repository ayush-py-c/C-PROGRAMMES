//Question No. 8 - check if the triangle is equilatoral, isoceles, scalar
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,s1,s2,s3;
    printf("side1\nside2\nside3");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if (a==b || b==c){
        printf("it is an equilatoral triangle");

    }
    else if (a==b || b==c || a==c){
        printf("it is an isoceles triangle");
    }
    // else if(a!=b!=c) {
    //     printf("scalene triangle");
    // }
    else{
        printf("Scalene Triangle");
    }    
    return 0;
    }
    

