//Addition of the two matrix
#include<stdio.h>
int main()
{
	int i,j;
	int d[3][3],e[3][3],f[3][3];
	printf("\t##########1st Matrix number##########\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element:",i,j);
			scanf("%d",&d[i][j]);
		}
	}
	printf("\t##########2nd Matrix number##########\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element:",i,j);
			scanf("%d",&e[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		f[i][j]=d[i][j]+e[i][j];
	}
	printf("\t##########Addition of the matrix number##########\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",f[i][j]);
		}
		printf("\n");
	}
	return 0;
}
