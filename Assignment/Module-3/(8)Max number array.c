//Write a program to find out the max number from given 10 elements of array
#include<stdio.h>
int main()
{
    int a[10],i,n,max;
    //printf("Enter size of the array:");
    //scanf("%d",&n);
    printf("Enter any number:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<10;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    {
        printf("maximum number array is%d",max);
    }
    return 0;
}  

