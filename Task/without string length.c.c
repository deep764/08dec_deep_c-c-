#include<stdio.h>
int main()
{
    char deep[20];
    int i;
    printf("Enter the Character:");
    gets(deep);
	for(i=0;deep[i]!='\0';i++);
	printf("Length of Character:%d",i);
	return 0;
}
