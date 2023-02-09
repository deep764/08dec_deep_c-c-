#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20],str2;
    printf("Enter the character:");
    scanf("%s",&str);
    fptr = fopen("D:/new/deep.txt", "a");
    fprintf(fptr,"%s",str);
    fclose(fptr);
   
}
