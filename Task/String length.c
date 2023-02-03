#include<stdio.h>
#include<string.h>
int main()
{
	char deep[30];
	int length;
	printf("Enter the string:");
	scanf("%s",&deep);
	length=strlen(deep);
	printf("String length:%d\n",length);
	printf("String name is:%s",deep);
	return 0;
}
