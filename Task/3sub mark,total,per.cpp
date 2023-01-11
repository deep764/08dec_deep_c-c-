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
	if(phy>=33&&maths>=33&&che>=33)
	{
		printf("\nTotal marks:%d",total);
		printf("\nTotal percentage:%f",per);
		if(per>75) 
		{
			printf("\nDistinction");
		}
		else if((per>60) && (per<=75))
		{
			printf("\nFirst class");
		}
		else if((per>50) && (per<=60))
		{
			printf("\nSecond class");
		}
		else if((per>35) && (per<=50))
		{
			printf("\nPass class");
		}
	}
	else	
	{
		printf("Fail");
	}
	return 0;
}

