//Write a program to find out the factorial of given number using function
#include<stdio.h>
double i,n,k=1;
void getdata()
{
	printf("\n Enter factorial number:");
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		k=k*i;
	}
}
void showdata()
{
	printf("\n show to factorial number:%lf",k);
}
int main()
{
	getdata();
	showdata();
	return 0;
}
