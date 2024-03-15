// question number  : 2
#include <stdio.h>
int main(void)
{
    int i,j,arr[3][4]={
            {1,1,2,1},
            {2,3,1,2},
            {3,4,1,2}
            };
    for (i=0;i<3;i++){
        // min = a[0];
        // int head =0;
        for (j=0;j<4;j++){
            // min=min+arr[i][j];
            // head=head+arr[3][5];
            // printf("element at x[%i][%i] : ",i,j);
            printf("%d",arr[i][j]);
        }
        printf("\n");
        
    }
    return 0;
}
