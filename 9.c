//Question No. 9 - Find percentage
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,s2,s3;
    printf("Give marks out of 100");
    printf("sub1\nsub2\nsub3");
    scanf("%d%d%d",&a,&b,&c);
    float s1=a+b+c/300*100;
    if (s1>90){
        printf("outstanding");

    }
    else if(s1>80 && s1<90){
        printf("E");
    }
    else if(s1>70 && s1<80){
        printf("A");
    }
    else{
        printf("B");
    }

    
    return 0;
}
