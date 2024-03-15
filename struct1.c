// #include<stdio.h>
// struct EMPNAME
// {
//     floatID;
//     floatMarks;
//     char favchar;

// };
// #include<stdio.h>
// floatmain(floatargc, char const *argv[])
// {
//     float a = 1 
    
// }
// #include<stdio.h>
// floatmain(floatargc, char const *argv[])
// {
//     for (floati = 0; i < 4; i++)
//     {
//         for (floatj = 0; j < 5 ; j++)
//         {
//            printf("* ");
//         }
//         printf("\n");
//     }
    
//     return 0;
// }


// Question 4
// #include<stdio.h>
// int main()
// {
    
//     printf("(x^3+3x^2-4z)/(7+2y)\n");
    
//     float num;
    
//     float x,y,z ;
    
    
//     printf("Enter x : ");
//     scanf("%f",&x);
    
//     printf("Enter y : ");
//     scanf("%f",&y);
    
//     printf("Enter Z : ");
//     scanf("%f",&z);
//     float den = 7+2*y;
//     num =  x*x*x+3*x*x-4*z;
    
//     // printf("%f",den);
//     // printf("%f",num);
//     float result = num/den;
//     printf("After computing the value is : %f",result);
//     return 0;
// }

// question 4 
// #include <stdio.h>
// int main()
// {
//     int a,b;//1,2
//     printf("NUM (A,B) : ");
//     scanf("%d,%d",&a,&b);
//     int c; 
//     c = a; //c=1
//     a = b; //a=2
//     b = c; //b=1
//     // c=printf("%d,%d",b,a);
//     printf("%d,%d",a,b); //(2,1)
//     return 0;
// }

// question 5 
// #include<stdio.h>
// int main()
// {
    


//     int a,b;//1,2
//     printf("NUM (A,B) : ");
//     scanf("%d,%d",&a,&b);;
    
//     a = a+b; //3
//     b = a-b ; //-1
//     a = a-b; //4
//     printf("%d,%d",a,b);
    

//     return 0;
// }


// #include<stdio.h>
// #include <stdlib.h>
// int main(int argc, char const *argv[])
// {
//     int *p;
//     p= malloc(sizeof(int));
//     scanf("%d",p);
//     printf("%d",*p);
//     return 0;
// }
 
// #include<stdio.h>
// #include <stdlib.h>
// int main(int argc, char const *argv[])
// {
//     int *p;
//     p= malloc(5 * sizeof(int));
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",p+i);
//         printf("%d",*p+i);
//     }
    
    
    
//     return 0;
// }
 
//  Question 5 
// #include <stdio.h>

// int main() {
//     float num;

//     // Input the real number
//     printf("Enter a real number: ");
//     scanf("%f", &num);

//     // Calculate and display the real and decimal parts using modulo
//     int realPart = (int)num;
//     float decimalPart = num - realPart;

//     printf("Real Part: %d\n", realPart);
//     printf("Decimal Part: %f\n", decimalPart);

//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     int ones = num%10;
//     int a = num/10; 
//     int tens = a%10;
//     int b = num/100;
//     int hun = b%10;
//     int c = num/1000;
//     int th = c%10;
    

//     // printf("%d",ones);
//     printf("%d %d %d %d ",ones,tens,hun,th);
//     return 0;
// }

// // question 5
// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the no(5 digit): ");
//     scanf("%d",&num);
//     int mid1= (num/100)%10;

//     printf("Middle digit  : %d \n",mid1);
//     int mide2= (num/100)%10;
//     int mide1= (num/1000)%10;
//     int mide3= (num/10)%10;
//     printf("Middle Three digits  : %d %d %d \n",mide1,mide2,mide3);
    
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the no(4 digits): ");
//     scanf("%d",&num);
//     int fdig= (num/1000);
//     int a = num%1000; // 234
//     int tdig = (a%10)%10;
    

    
//     int ldig= (num%10);
//     int sdig= (a/100);
     
//     printf("reverse no  : %d %d %d %d\n",ldig,sdig,tdig,fdig);
    
//     return 0;
// }

#include<stdio.h>
int main()
{
    printf("pointers\n");
    int a=76 ;
    
    int* ptr = &a;
    int* pt = NULL;
    printf("valkue %p",&ptr);
    printf("valkue %p",pt);
    return 0;
}

 