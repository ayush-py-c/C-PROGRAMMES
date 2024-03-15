// #include <stdio.h>
// int main()
// {
//     // int row=3,column=4;
//     // int arr[3][4] = {
//     //     {1,2,3,4},
//     //     {5,8,9,8},
//     //     {9,4,65,8}

//     // };
//     int r,c;
//     printf("Enter the row size :");
//     scanf("%d",&r);
//     printf("Enter the column size :");
//     scanf("%d",&c);
//     int arr[r][c];
// // Entering the elements 
//     printf("Entering the elements\n");
//     printf("Enter the elements : ");
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
            
//             scanf("%d",&arr[i][j]);
//         }
        
//     }
// // Displaying the elements
//     printf("Displaying the elements\n");
//     for ( int i = 0; i <r ; i++)
//     {
//         for ( int j = 0; j <c ; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
        
//     }
// // array in column manner
//     printf("array in column manner\n");
//     for ( int j = 0; j <c ; j++)
//     {
//         for ( int i = 0; i <r ; i++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
        
//     }
// // reverse order
// printf("reverse order\n");
// for ( int i = r; i <r ; i--)
//     {
//         for ( int j = 0; j <c ; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
        
//     }
// // Addition of matrix 
// printf("Addition of matrix\n");
// int arr2[r][c];
    
//     return 0;
// }

#include <stdio.h>

int main() {
    int row1, col1, row2, col2;

    
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);

    
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);

    
    if (col1 != row2) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 1;
    }

    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int result[row1][col2];
    int i, j, k;

    
    printf("Enter elements for the first matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    
    printf("Enter elements for the second matrix:\n");
    for (i = 0; i < row2; i++) {
        for (j = 0; j < col2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            result[i][j] = 0;
        }
    }

    
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            for (k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    
    printf("Resultant Matrix:\n");
    for (i = 0; i < row1; i++) {
        for (j = 0; j < col2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}