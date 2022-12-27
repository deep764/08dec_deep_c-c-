//WAP 5 subjects marks make a total and find the percentage.
#include<stdio.h>
int main()
{
	int e,s,m,g,h,total;
	float per;
	printf("Enter the English marks:");
	scanf("%d",&e);
	printf("Enter the Science marks:");
	scanf("%d",&s);
	printf("Enter the Maths marks:");
	scanf("%d",&m);
	printf("Enter the Gujarati marks:");
	scanf("%d",&g);
	printf("Enter the Hindi marks:");
	scanf("%d",&h);
	total=e+s+m+g+h;
	per=total/5;
	printf("\n Total marks:%d",total);
	printf("\n Total percentage:%f",per);
	if(per>75)
	{
		printf("\n Distinction");
	}
	else if((per>60) && (per<=75))
	{
		printf("\n First class");
	}
	else if((per>50) && (per<=60))
	{
		printf("\n Second class");
	}
	else if((per>35) && (per<=50))
	{
		printf("\n Pass class");
	}
	else
	{
		printf("\n Fail");
	}
	return 0;
}
