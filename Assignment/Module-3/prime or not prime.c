//WAP prime or not prime
#include<stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter the any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;	
		}
	}
		if(c==2)
		{
			printf("prime number");
		}
		else
		{
			printf("not prime number");
		}
		
	return 0;
} 
