#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[6]={1,9,10,3,5,4};
    int b=a[1]+a[0];
    int c=a[1]+a[0]+a[2];
    int d=a[1]+a[0]+a[2]+a[3];
    int e=d+a[4];
    int f=e+a[5];
    printf("%d %d %d %d %d %d",a[0],b,c,d,e,f); 
    return 0;
}

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int arr[8]={1,2,3,4,5,6,7,8};
//     int i=1;
//     for ( i = 0; i < 8; i+=2)
//     {
//         int b=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=b;
//     }
//     for ( i = 0; i < 8; i++)
//     {
//         printf("%d",arr[i]);
//     }
    
//     return 0;
// }
