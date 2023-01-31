#include<stdio.h>
int main()
{
	int i,j;
	int N = 10;
	char c;
	printf("Enter Char:");
	scanf("%c",&c);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			int temp = N/10;
			if(i == temp&& (j== temp))
			{ 
			 	printf(" %c",c);
			}            
			else if(j == (N/2) || i == (N-1))
			{
				printf(" %c",c);
			}
			else
			{
				printf("  ");
			}	
		} 
		printf("\n");
	}
}
