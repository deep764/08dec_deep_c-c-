//WAP Compound Interest
#include<stdio.h>
#include<math.h>
int main()
{
	float a,ci,p,r,n;
	printf("Enter the P value:");
	scanf("%f",&p);
	printf("Enter the R value:");
	scanf("%f",&r);
	printf("Enter the N value:");
	scanf("%f",&n);
	a=p*pow((1+r/100),n);
	ci=a-p;
	printf("Compound Interest:%f",ci);
	return 0;
	
}
