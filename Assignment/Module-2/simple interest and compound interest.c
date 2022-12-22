//WAP simple interest and compound interest
#include<stdio.h>
int main()
{
	float si,ci,p,r,n;
	printf("Enter the P value:");
	scanf("%f",&p);
	printf("Enter the R value:");
	scanf("%f",&r);
	printf("Enter the N value:");
	scanf("%f",&n);
	si=p*r*n/100;
	printf("Simple Interest: %f",si);
	ci=p*pow((1+r/100),n)-p;
	printf("\nCompound Interest:%f",ci);
	return 0;
}
