#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    // int num=0;
    
    // printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
            printf("Enter the %d element of array:",i);
            scanf("%d",&arr[i]);
        

    }
    printf("\nElements in array: ");
    for (int i=0; i < n; i++)
    {
        // int i=0;
        printf("%d",arr[i]);
    }
    printf("\n");
    

    return 0;
}
