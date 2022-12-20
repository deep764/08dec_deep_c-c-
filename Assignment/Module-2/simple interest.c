//WAP simple interest
#include<stdio.h>
int main()
{
	float i,p,r,n;
	printf("Enter the P value:");
	scanf("%f",&p);
	printf("Enter the R value:");
	scanf("%f",&r);
	printf("Enter the N value:");
	scanf("%f",&n);
	i=p*r*n/100;
	printf("Simple Interest: %f",i);
	return 0;
}
