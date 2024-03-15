//To find the discounted amount
#include<stdio.h>
int main()
{
	int a,bn,dn, cn,d,b,c;
	float dp,cp,bp,tot;
	scanf("%d%d%d",&d,&b,&c);
	scanf("%d%d%d",&dn,&bn,&cn);

	if (d<1000)
	dp=(d-d*0.1)*dn;
	else if (d<5000)
	dp=(d-d*0.2)*dn;
	else 
	dp=(d-d*0.4)*dn;

	if (c<1000)
	cp=(c-c*0.1)*cn;
	else if (c<5000)
	cp=(c-c*0.2)*cn;
	else 
	cp=(c-c*0.4)*cn;

	if (b<1000)
	bp=(b-b*0.1)*bn;
	else if (d<5000)
	bp=(b-b*0.2)*bn;
	else 
	bp=(b-b*0.4)*bn;

	tot =bp+cp+dp;
	if (tot>10000)
	tot=tot*0.95;

        printf("Total Amount %f",tot);
    	return 0;
}