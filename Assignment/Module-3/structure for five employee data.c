#include<stdio.h>
struct dkdata
{
    int id,age;
    char name[20];
    char address[30];
};
int main()
{
    struct dkdata dk[20];
    int i;
    for (i = 0; i < 5; i++)
    {
    	printf("\nEnter employee id:");
    	scanf("%d",&dk[i].id);
    	printf("\nEnter employee name:");
    	scanf("%s",&dk[i].name);
    	printf("\nEnter employee address:");
    	scanf("%s",&dk[i].address);
    	printf("\nEnter employee age:");
    	scanf("%d",&dk[i].age);
    }
    for (i = 0; i < 5; i++)
    {
        printf("\nEmployee id:%d",dk[i].id);
    	printf("\nEmployee name:%s",dk[i].name);
    	printf("\nEmployee address:%s",dk[i].address);
    	printf("\nEmployee age:%d",dk[i].age);
    }
}
