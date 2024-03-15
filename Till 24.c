//lab 1
//  Question no. - print name

//  #include<stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      printf("Ayush Raj");
//      return 0;
//  }

//1st August 2023
//Question - print name address

//#include <stdio.h> 
//int main(int argc, char const *argv[])
//{
//  printf("\tFather Name : Raghubansh Prasad\n\tCity : Ranchi\n\tPIN:834009");
//  return 0;
//}


//Question  - print dancing figure

//#include <stdio.h>
//int main(int argc, char const *argv[])
//{
//    printf(" 0\n");
//    printf("_|_\n");
//    printf(" |\n");
//    printf("/ \\\n");
//    return 0;
//}
 

//Question - print 2 dancing figure
//#include <stdio.h>
//int main(int argc, char const *argv[])
//{
//    printf(" 0\n\v\v\v	  0\n");
//    printf("_|_/\n\v\v\v\_|_\n");
//    printf(/ |\n\v\v\v    | \\\n");
//    printf(" |\n"\v\v\v	  |\n);
//    printf("/ \\\n\v\v\v / \\");
//    return 0;
//}

//Question -  Tick Mark
//print tick mark
//#include<stdio.h>
//int main(){
//printf("        .\n");
//printf("       .\n");
//printf("      .\n");
//printf(".    .\n");
//printf(" .  .\n");
//printf("  .\n");
//}

//Question - K sign
//print K
//#include<stdio.h>
//int main()
//{
//printf("|  /\n| /\n|/\n|\\\n| \\\n|  \\\n");
//return 0;
//}

//print bill
//#include<stdio.h>
//int main()
//{
//printf("Item No.\t Item Name\t Price\n________\t _________\t ______\nIt1\t\t xyz\t\t 10.24/-\nIt2\t\t xyzpl\t\t 13.24/-\nIt285\t\t ABPT\t\t 19.65/-\n");
//return 0;
//}



//lab 3
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


//Lab 4
//take distance in mtr and print in km and m
#include<stdio.h>
int main()
{
	int r;
	printf("enter distance in metre:");
	scanf("%d",&r);
	int km= r/1000;
	int m= r%1000;
	printf("%dkm and  %dm\n",km,m);
	return 0;
}



//take temperature in celcius and print it in fahrenheit
#include<stdio.h>
int main()
{
	float c;
	printf("enter temperature in celcius scale:");
	scanf("%f",&c);
	float f=((c*9)/5)+32;
	printf("temperature in fahrenheit scale is:%f\n",f);
	return 0;
}


//take the coefficients of the quadratic equation and check the nature of the roots
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("for a quadratic eqn, enter the coefficients such that first value non-zero:");
	scanf("%f%f%f",&a,&b,&c);
	float D=(b*b)-4*a*c;
	(D>=0)?((D==0)?printf("real and equal roots"):printf("real and unequal roots")):printf("imaginary roots");
	return 0;
}

//input a no and test if it is even or odd
#include<stdio.h>
int main()
{
	int n;
	printf("enter a no.:");
	scanf("%d",&n);
	(n%2==0)?printf("%d is even",n):printf("%d is odd",n);
	return 0;
}

//take 3digit no and check for palindrome
#include<stdio.h>
int main()
{
	int n;
	printf("enter triple digit a no.");
	scanf("%d",&n);
	int a=n;
	int u=n%10;
	n/=10;
	int t= n%10;
	n/=10;
	int nn=u*100+t*10+n;
	(nn==a)?printf("it is a pallindrome"):printf("it is not a pallindrome");
	return 0;
}

//take time in second and print hour min sec
#include<stdio.h>
int main()
{
	int s;
	printf("enter time in seconds:");
	scanf("%d",&s);
	int h=s/3600;
	s%=3600;
	int m= s/60;
	s%=60;
	printf("%dhrs %dmins %dsecs:",h,m,s); 
	return 0;
}

//take 2 integers and perform all relational operations on them
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two nos:");
	scanf("%d%d",&a,&b);
	(a>=b)?((a==b)?printf("%d=%d",a,b):printf("%d>%d",a,b)):printf("%d<%d",a,b);
	return 0;
}

// lab 5
//test of inputting hexadecimal or octal
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter same no. twice: ");
	scanf("%i",&a);
	scanf("%d",&b);
	printf("%i\n",a);
	printf("%i",b);
	return 0;
}

//find the 7th and 12th bit of a given integer and display
#include<stdio.h>
int main()
{	
	int a,b,c;
	scanf("%i",&a);
	b=(a&0x40)>>6;
	c=(a&0x800)>>11;
	printf("%i\n%i",b,c);
	return 0;
}


//assign a character and interchange the last and 2nd last 4bits
#include<stdio.h>
int main()
{
	char a=0xDA;
	int x=(a&0xF)<<4;
	int y=(a&0xF0)>>4;
	int s= x|y;
	printf("%x",s);
	return 0;
}


//assign 4 characters and combine them to make an integer each in different orders
#include<stdio.h>
int main()
{
	char a= 0x2A;
	char b= 0xBC;
	char c= 0x35;
	char d= 0x40;
	int e=(a&0xFF)<<24|(b&0xFF)<<16|(c&0xFF)<<8|(d&0xFF);
	int f=(a&0xFF)<<24|(b&0xFF)|(c&0xFF)<<16|(d&0xFF)<<8;
	printf("%x\n%x\n",e,f);
	return 0;
}


//take an integer and rearrange the following
#include<stdio.h>
int main()
{
	int a=   0xAB023254;
	
	int b=(a&0xFF000000)>>24;
	int f=(a&0xFF0000)>>8;
	int g=(a&0xFF00)<<16;
	int h= (a&0xFF)<<16;
	int e=b|f|g|h;
	printf("%x\n",e);
	return 0;
}


//take 2 chars and rearrange
#include<stdio.h>
int main()
{
	char a= 0xAB;
	char b= 0xC5;
	int e=(a&0xF0)|(b&0xF);
	int f=(a&0xF)|(b&0xF0);
	printf("%x\n%x\n",e,f);
	return 0;
}





