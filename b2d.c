#include<stdio.h>
void main()
{
	printf("Enter a no.\n");
	int n;
	scanf("%d",&n);
	int d,p=1,s=0;
	while(n!=0)
	{
		d=n%10;
		s=s+d*p;
		p=p*2;
		n=n/10;
	}
	printf("%d",s);
}

