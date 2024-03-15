//Question no. 6 - check for valid triangle
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,s1,s2,s3;
    printf("side1\nside2\nside3");
    scanf("%d\n%d\n%d",&a,&b,&c);
    s1 = a+b;
    s2 = b+c;
    s3 = c+a;
    if (s1>a && s2>b && s1>c){
        printf("trianlge is valid");

    }
    else{
        printf("triangle is invalid");
    }

    return 0;
}
