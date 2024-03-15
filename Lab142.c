#include <stdio.h>
int main()
{
    // int n=263;
    // char *b = &n;
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d",*(b+1));
    // }
    
    // int a[5]={5,9,6,8};
    // int *b=&a[0];
    // printf("%d",*(b+3));
    int a=0;
    printf("Enter the number");
    scanf("%d",&a);
    char *b= &a;
    for (int i=0;i<n;i++){
        printf("%p",&(a+i));
    }

    return 0;
}
