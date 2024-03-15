#include<stdio.h>
int main()
{
    // Determing the size of array
    int n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int i,a[n];
    // Algorithm for displaying the array 
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // Displaying the array
    for (i=0;i<n;i++){
        printf("%d ,",a[i]);
        
    }

    
    return 0;
}
