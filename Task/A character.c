#include<stdio.h>
int main()
{
	int i,j;
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	for(i=1;i<=15;i++)
	{
		for(j=1;j<=12;j++)
		{
			if(((i>3&&i<7)&&(j>3&&j<10)||(i>9)&&(j>3&&j<10)))
			{
				printf(" ");
			}
			else
			{
				printf("%c",ch);
			}
		}printf("\n");
	}
}
