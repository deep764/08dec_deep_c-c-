//WAP Fibonacci series
#include<stdio.h>
int main()
{
	int i,n,a,b,c;
	a=0;
	b=1;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Fibonacci series\n%d\n%d",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("\n%d",c);
		a=b;
		b=c;	
	}	
	return 0;
}
