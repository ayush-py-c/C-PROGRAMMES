#include<stdio.h>
int main()
{
	int i=1,n;
	float s=0,f=1;
	scanf("%d",&n);
	while (i<=n)
	{
		f*=i;
		if (i%2==0)
		s+=f/(i+1);
		else
		s+=i/(f*(i+1));
		i++;
	}
	printf("%f",s);
	//return 0;
	
	//float a;
	
}
