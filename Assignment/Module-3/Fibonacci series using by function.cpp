#include<stdio.h>
int i,n,a=0,b=1,c;
void fibo(int);

int main()
{
    printf("Enter the value of no:");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n)
{
    printf("Fibonacci series:\n%d\n%d",a,b);
    for(i=3;i<=n;i++)
    {
    	c=a+b;
    	printf("\n%d",c);
    	a=b;
    	b=c;
	}
}
