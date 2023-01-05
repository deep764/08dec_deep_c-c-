#include<stdio.h>  
int main()  
{  
    char deep;  
    printf("Enter a Character:");  
    scanf("%c", &deep);  
    if((deep>=65 && deep<=90) || (deep>=97 && deep<=122))  
    {  
        printf("Alphabet",deep);  
    }   
    else if(deep>=48 && deep<=57)  
    {  
        printf("Number",deep);  
    }  
    else 
    {  
        printf("Special Character",deep);  
    }  
    return 0;  
}  
