// WAP leap year or not leap year
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not Leap year");
	}
	return 0;
}
