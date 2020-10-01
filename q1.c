#include <stdio.h>

int nCr_helper();

int main()
{
	int n,r,nCr;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter r:");
	scanf("%d",&r);	
	nCr=nCr_helper(n)/(nCr_helper(r)*nCr_helper(n-r));
	printf("%d",nCr);

	return 0;
}	
int nCr_helper(int a)
{
	int i,f=1;
	for(int i=1;i<=a;i++)
	{
		f=f*i;
	}
	return f;
}
