//Write a program to concatenate the two string using pointer
#include<stdio.h>
#include<string.h>
int main()
{
	char fname[50],lname[50];
	char *p,*q;
	int i,j;
	p=&fname;
	q=&lname;
	printf("Enter First name:");
	gets(fname);
	printf("\nEnter Last name:");
	gets(lname);
	for(i=0;*(p+i)!='\0';i++);
	{
		for(j=0;*(q+j)!='\0';j++,i++)
		{
			*(p+i)=*(q+j);
		}
		*(p+i)='\0';
		printf("After join String:%s",p);
	}
	return 0;
}
