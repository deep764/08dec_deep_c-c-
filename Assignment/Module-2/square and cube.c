// WAP square and cube
#include<stdio.h>
int main()
{
	int s,c,number;
	printf("Enter the any number:");
	scanf("%d",&number);
	s=number*number;
	printf("==============SQUARE==============");
	printf("\nsquare:%d",s);
	c=number*number*number;
	printf("\n==============CUBE================");
	printf("\ncube:%d",c);
	return 0;
}
