/*1 2 3
4 5 6
7 8 9*/
#include<stdio.h>
int main()
{
    int i,j;
    int array[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Value of array[%d][%d]:",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
    	printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("%d\t",array[i][j]);
        } 
    }
    
    return 0;
}
