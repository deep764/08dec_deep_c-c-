#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20],str2[20];
    printf("Enter the character:");
    scanf("%s",&str2);
    fptr = fopen("D:/new/deep2.txt","w");
    fprintf(fptr,"%s",str2);
    fclose(fptr);
    fptr = fopen("D:/new/deep2.txt","r");
    fscanf(fptr,"%s",&str);
    printf("%s",str);
    fclose(fptr);
}
