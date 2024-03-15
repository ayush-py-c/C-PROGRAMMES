// #include<stdio.h>
// int main()
// {
//     int arr[7]={1,21,13,41,5,6,7};
//     for (int i = 0; i < 7; i++)
//     {
//         if (i%2==0)
//         {
//             int temp = arr[i];
//             arr[i]=arr[i+1];
//             arr[i+1]=temp;
            
//         }
//     }
//     arr[6]=7;
//     for (int i = 0; i < 7; i++)
//     {
//         printf("%d ",arr[i]);
//     }
    
    
//     return 0;
// }
#include<stdio.h>

int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d, %d, %d", i, j, m);
    return 0;
}