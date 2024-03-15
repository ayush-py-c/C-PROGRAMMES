#include<stdio.h>
int main()
{
	int i=1,n;
	float s=0;
	scanf("%d",&n);
	while (i<=n)
	{
		s+=1/i;
		i++;
	}
	printf("%f",s);
}