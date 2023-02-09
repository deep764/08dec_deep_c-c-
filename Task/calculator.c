#include<stdio.h>  
int main()  
{  
    char opt;  
    int n1,n2;   
    float res;  
    printf (" Choose an operator(+,-,*,/)::::");  
    scanf ("%c",&opt); 
    if (opt=='/')  
    {  
        printf("You have selected: Division");  
    }  
    else if (opt=='*')  
    {  
        printf("You have selected: Multiplication");  
    }  
       
    else if(opt=='-')  
    {  
        printf("You have selected: Subtraction");  
    }  
    else if(opt=='+')  
    {  
        printf("You have selected: Addition");  
    }     
    printf("\nEnter the first number:");  
    scanf("%d",&n1); 
    printf("Enter the second number:");  
    scanf("%d",&n2); 
    switch(opt)  
    {  
        case '+':
		{
			res=n1+n2; 
            printf("Addition is:%f",n1,n2,res);  
            break;
		}          
        case '-':
		{
			res=n1-n2;  
            printf("Subtraction is:%f",res);  
            break;	
		}         
        case '*':
		{
			res=n1*n2;  
            printf("Multiplication is:%f",res);  
            break; 
		}        
        case '/':
		{
			if(n2==0)    
            {  
                printf("\nDivisor cannot be zero. Please enter another value");  
                scanf("%d", &n2);        
            }  
            res = n1 / n2;   
            printf("Division of is:%f",res);  
            break; 
		}     
        default:
            printf(" Something is wrong!! Please check the options");               
    }  
    return 0;  
}  
