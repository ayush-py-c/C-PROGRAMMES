#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,n,x=1,j=0;
	float s=0;
	scanf("%d",&n);
	while (i<=n)
	{
		j=1,x=1;
		while (j<=(n-i+1))
		{
			x*=i;
			j++;
		}
		//printf("%d\n",x);
		s+=1.0/x;
		i++;
		//printf("%f\n",s);
	}
	printf("%f",s);
}