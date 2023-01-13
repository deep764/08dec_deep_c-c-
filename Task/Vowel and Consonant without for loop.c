#include<stdio.h>
int main()
{
	char deep;
	printf("Eneter the alphabet:");
	scanf("%c",&deep);
	if(deep=='a'||deep=='e'||deep=='i'||deep=='o'||deep=='u'||deep=='A'||deep=='E'||deep=='I'||deep=='O'||deep=='U')
	{
		printf("%c is Vowel",deep);
	}
	else
	{
		printf("%c is Consonant",deep);
	}
	return 0;
}
