#include <stdio.h>
int factorial();
int nCr();
int main()
{
	int n,k,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter k:");
	scanf("%d",&k);
	for(int i=0;i<=k;i++)
	{
		sum=sum+ nCr(n,i);
	}
	printf("%d\n",sum );

	return 0;
}
int nCr(int a,int b)
{
	int NCR;
	if(b==0)
		NCR=0;
	else
		NCR=factorial(a)/(factorial(b)*factorial(a-b));
	return NCR;
}
int factorial(int x)
{
	int i,f=1;
	for(int i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}