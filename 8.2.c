#include <stdio.h>
int main()
{	int i=12,j=19,a;	
	for(int x=1;x<=9;x++)
	{
		if (x%2==0)
			a= 10-x;
		else 
			a=x;
		printf("%d\t",a);
	}
	printf("\n");
	for(;i<=20,j>=13;i+=2,j-=2)
	{	
		printf(" %d %d ",i,j);
	}
	printf("%d",i);
}