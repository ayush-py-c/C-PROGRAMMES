#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,n,a=0,b=1,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        for (i=0;i<n;i++){
            
        }    
    }


    return 0;
}
    
    

int i,n,a[n] ; 
    scanf("%d",&n);
    for(i=0;i<n;i++){
    // Fibbonaci code 
    int a = 0, b = 1;  
    int count = 0;

    printf("Fibonacci Series: ");
    
    while (count < n) {
        printf("%d, ", a);

        
        int next = a + b;
        a = b;
        b = next;

        count++;
    }