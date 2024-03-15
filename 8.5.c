#include<stdio.h>
int main()
{
	int i,s,c=0,j,n;
	scanf("%d%d",&s,&n);
	for (i=s;i<=n;i++)
	{
		c=0;
		for(j=2;j<i;j++)
		{
			if (i%j==0)
			c++;
		}
		(c==0)?printf("%d\n",i):0;
		(i%2==0)?printf("%d\n",i):0;
	}
}