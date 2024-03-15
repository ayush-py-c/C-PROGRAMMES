//Question no -1 WAP to check whether the number is positive or negative
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    if (a<0)        
    {
        printf("%d is a negative number");
    }
    else if(a>0){
        printf("%d is a positive number");
    }
    else{
	printf("Niether even nor odd");
    }
    
    return 0;
}
