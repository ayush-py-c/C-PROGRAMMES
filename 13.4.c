#include<stdio.h>
int main(int argc, char const *argv[])
{
     int arr1[3][3]={
            {1,1,2},
            {2,3,1},
            {3,4,1}
            };
    int arr2[3][3]={
            {1,1,1},
            {2,1,2},
            {4,1,2}
            };
    int c[3][3]=arr1[3][3]+arr2[3][3];
    printf("%d",c[3][3]);
    return 0;
}
