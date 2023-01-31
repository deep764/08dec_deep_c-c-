//Write a program to sort the array of 5 elements.
#include<stdio.h>
int main()
{
	int i,j,a,number[5];
	printf("Enter the number:\n");
	for(i=0;i<5;i++)
	scanf("%d",&number[i]);
	//Ascending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(number[i]>number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	printf("Ascending order:\n");
	for(i=0;i<5;i++)
	printf("%d\n",number[i]);
	//Descending order
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(number[i]<number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	printf("Descending order:\n");
	for(i=0;i<5;i++)
	printf("%d\n",number[i]);
	return 0;
}
