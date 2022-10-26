#include<stdio.h>
int main()
{
	int n,d,s=0,p=1;
	printf("Enter number in decimal ");
	scanf("%d",&n);
	int m=n;
	while(n!=0)
	{
		d=n%2;
		s=s+d*p;
		p=p*10;
		n=n/2;
	}
	printf("%d binary equivalent is %d",m,s);
	return 0;
}
