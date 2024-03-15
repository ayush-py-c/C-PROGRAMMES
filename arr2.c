#include <stdio.h>
int main()
{
    // int n=0;
    // int arr[7]={1,1,2,3,5,8,13};
    // // int form=0;
    // for (int i=0; i < 7; i++)
    // {
    //     // int i=0;
    //     printf("[%d]",arr[i]);
    // }
    // printf("\n");
    int n;
    int arr[n];
    printf("Enter the number :");
    scanf("%d",&n);
    int f=1,s=1;
    int nxtterm=f+s;
    printf("%d %d ",f,s);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",nxtterm);
        f=s;
        s=nxtterm;
        nxtterm=f+s;
    }
    
    
    return 0;
}
