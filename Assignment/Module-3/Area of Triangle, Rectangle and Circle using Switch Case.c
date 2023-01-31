//WAP find out the Area of Triangle, Rectangle and Circle using Switch Case
#include<stdio.h>
int main()
{
	float r,l,bre,b,h,a;
	int choice;
	printf("\n1.Please find area of triangle");
	printf("\n2.Please find area of circle");
	printf("\n3.Please find area of rectangle");
	printf("\nEnter the your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter base of a triangle:");
			scanf("%f",&b);
			printf("\nEnter height of a triangle:");
			scanf("%f",&h);
			a=(1.0/2)*b*h;
			printf("\nArea of Triangle:%f",a);
			break;
		case 2:
			printf("\nEnter the radius of a Circle:");
			scanf("%f",&r);
			a=3.14*r*r;
			printf("\nArea of Circle:%f",a);
			break;
		case 3:
			printf("\nEnter the length a Rectangle:");
			scanf("%f",&l);
			printf("\nEnter the breadth of a Rectangle:");
			scanf("%f",&bre);
			a=l*bre;
			printf("\nArea of Rectangle:%f",a);
			break;
		default:
			printf("Invalid Choice\n");
	}
}
