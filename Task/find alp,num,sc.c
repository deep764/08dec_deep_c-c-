#include<stdio.h>
int main()
{
	char deep;
	printf("Enter the character:");
	scanf("%c",&deep);
	if((deep>='a' && deep<='z') || (deep>='A' && deep<='Z'))
	{
		printf("Alphabet");
	}
	else if((deep>='0' && deep<='9')) 
	{
		printf("Number");
	}
	else
	{
		printf("Special Character");
	}
	return 0;
}
