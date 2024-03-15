/*wap to display all algorithm*/
// #include <stdio.h>
// int main()
// {
//     int a,b,sum;
//     printf("Enter The First No :");
//     scanf("%d",&a);
//     printf("Enter The Second No :");
//     scanf("%d",&b);
//     sum = a+b;
//     int c = a-b;
//     int e = a*b;
//     int f = a/b;
//     int g = a%b;


//     printf("The sum is :%d\n",sum);
//     printf("The Difference is :%d\n",c);
//     printf("The Product is :%d\n",e);
//     printf("The Quotient is :%d\n",f);
//     printf("The Remainder is :%d",g);
    
//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     float a;
//     printf("Enter the Number:");
//     scanf("%f",&a);
//     int e=a;
//     float g = a-e ;
//     printf("The fraction part is: %f\n",g);
//     printf("Integer Part:%d ",e);

//     return 0;
// }


// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the four digit number:");
//     scanf("%d",&a);
//     // printf("the digits:%d%d%d%d",b,c,e,f);
//     int b=a%10;
//     int c=a/10;
//     int d=c%10;
//     int e=c/10;
//     int f=e%10;
//     int g=e/10;
    



    
    
//     printf("first digit:%d\n",g);
//     printf("Second digit:%d\n",f);
//     printf("Third Digit:%d\n",d);
//     printf("Fourth Digit:%d",b);

//     return 0;
// }


// 

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("Enter The (3 digit) Number to reverse :\n");
//     scanf("%d",&n);
//     int a,b,c,d; 
//     a = n%10;
//     b= n/10;
//     c = b%10;
//     d =b/10; 
//     printf("Reverse of the given Number is %d%d%d",a,c,d);
    
    
//     return 0;
// }





// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a;
//     printf("ENTER 7 DIGIT NO:");
//     scanf("%d",&a);
//     int b=(a%100000)/100;
    
   
//     printf("Middle 3 Numbers :%d ",b);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a;
//     printf("Enter the four digit number:");
//     scanf("%d",&a);
//     // printf("the digits:%d%d%d%d",b,c,e,f);
//     int b=a%10;//last digit
//     int c = (a/100)/10;//first digit
//     int d = (a/100)%10;//second line 
//     int e =(a%100)/10;//third digit
//     printf("The Required Output : %d%d%d%d",b,d,e,c);

//     return 0;
// }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,b,c;
//     printf("Enter First no:\n");
//     scanf("%d",&a);
//     printf("Enter second no:\n");
//     scanf("%d",&b);
//     printf("Enter third no:\n");
//     scanf("%d",&c);
//     int d=(a<b)?(a<c)?a:c:((b>c)?b:c);
//     printf("min no:%d",d);


//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,b,c,d,e,f,g;
//     printf("Enter First no:");
//     printf("Enter second no:");
//     printf("Enter third no:");
//     printf("Enter fourth no:");
//     printf("Enter five no:");
//     printf("Enter six no:");
//     printf("Enter seven no:");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     scanf("%d",&d);
//     scanf("%d",&e);
//     scanf("%d",&f);
//     int d=(a>b)?(a>c)?a:c:((b>c)?b:c)?(c>d)?(d>e)?d:e;
//     printf("min no:%d",d);


//     return 0;
// }

// #include <stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,b,c,d,e,f,g;
//     printf("Enter the numbers:");
//     scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
//     int x=(a<b)?((a<c)?a:c):((b<c)?b:c);
//     int y=(d<e)?((d<f)?d:f):((e<f)?e:f);
//     int z=(x<y)?((x<g)?x:g):((y<g)?y:g);
//     printf("Minimun Number: %d",z);

//     return 0;
// }


/*error*/
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a,b,c;
//     printf("Enter First no:\n");
//     scanf("%d",&a);
//     printf("Enter second no:\n");
//     scanf("%d",&b);
//     printf("Enter third no:\n");
//     scanf("%d",&c);
//     int d=(a<b)?a:b;
//     int e = (a<c)?a:b;
//     int f = (b>c)?b:c;
//     //int e = ((b<c)?c:b);
//     printf("Second Minimum number:%d",e);


//     return 0;
// }
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b;
    printf("num");
    scanf("%d",&a);
    b=a/100;
    printf("%d",b);

    return 0;
}
