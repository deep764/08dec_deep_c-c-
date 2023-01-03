// WAP Swapping
#include<stdio.h>
int main()
{ 
	int x,y;
	printf("Enter thr value x:");
	scanf("%d",&x);
	printf("Enter the value y:");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("After Swapping \nx:%d \ny:%d",x,y);
	return 0;
}
