#include<stdio.h>
int main()
{
	int phy,maths,che,total;
	float per;
	printf("Physics marks:");
	scanf("%d",&phy);
	printf("maths marks:");
	scanf("%d",&maths);
	printf("chemistry marks:");
	scanf("%d",&che);
	total=phy+maths+che;
	per=total/3;
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

