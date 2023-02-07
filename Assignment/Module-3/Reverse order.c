//WAP Reverse order
#include<stdio.h>
int main()
{
	int number,reverse;
	printf("Enter the any number:");
	scanf("%d",&number);
	while(number>0)
	{
		reverse=number%10;
		number=number/10;
		printf("%d",reverse);
	}
	return 0;
}

