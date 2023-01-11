#include<stdio.h>
int main()
{
	int choice,cha;
	printf("!!!!!!!!!!WELCOME TO Gada Electronics!!!!!!!!!!\v");
	printf("\nPlease press 1 for Mobile");
	printf("\nPlease press 2 for Air Conditioner");
	printf("\nPlease press 3 for Television");
	printf("\nPlease press 4 for Refrigerator");
	printf("\nPlease press 5 for Music System\v");
	printf("\nPlease enter the your choice:");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
				printf("\n**********MOBILE**********");
				printf("\n1. Samsung");
				printf("\n2. Apple");
				printf("\n3. Motorola");
				printf("\n4. Huawei");
				printf("\n5 Vivo\v");
				printf("\nPlease enter the your choice:");
				scanf("%d",&cha);
				switch (cha)
				{
					case 1:
						printf("\n You purchased Samsung mobile");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 2:
						printf("\n You purchased Apple mobile");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 3:
						printf("\nYou purchased Motorola mobile");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 4:
						printf("\nYou purchased Huawei mobile");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 5:
						printf("\nYou purchased Vivo mobile");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					default: 
				        printf("Please enter vaild choice");
				}
				break;
		case 2:
				printf("\n**********Air Conditioner**********");
				printf("\n1. Mitsubishi");
				printf("\n2. LG");
				printf("\n3. Whirlpool");
				printf("\n4. Bluestar");
				printf("\n5. Amstrad\v");
				printf("\nPlease enter the your choice:");
				scanf("%d",&cha);
				switch (cha)
				{
					case 1:
						printf("\nYou purchased Mitsubishi Air Conditioner");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 2:
						printf("\nYou purchased LG Air Conditioner");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 3:
						printf("\nYou purchased Whirlpool Air Conditioner");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 4:
						printf("\nYou purchased  Bluestar Air Conditioner");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 5:
						printf("\nYou purchased Amstrad Air Conditioner");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					default: 
				        printf("Please enter vaild choice");	   
			   }            
			   break;
		case 3:
				printf("\n**********Television**********");
				printf("\n1. Samsung");
				printf("\n2. Sony");
				printf("\n3. LG");
				printf("\n4. Oscar");
				printf("\n5  Xiaomi Mi\v");
				printf("\nPlease enter the your choice:");
				scanf("%d",&cha);
				switch (cha)
				{
					case 1:
						printf("\n You purchased Samsung Television");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 2:
						printf("\n You purchased Sony Television");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 3:
						printf("\nYou purchased LG Television");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 4:
						printf("\nYou purchased Oscar Television");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 5:
						printf("\nYou purchased Xiaomi Mi Television");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					default: 
				        printf("Please enter vaild choice");
				}
				break;
		case 4:
				printf("\n**********Refrigerator**********");
				printf("\n1. Samsung");
				printf("\n2. Kelvinator");
				printf("\n3. LG");
				printf("\n4. Whirlpool");
				printf("\n5. Panasonic\v");
				printf("\nPlease enter the your choice:");
				scanf("%d",&cha);
				switch (cha)
				{
					case 1:
						printf("\n You purchased Samsung Refrigerator");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 2:
						printf("\n You purchased Kelvinator Refrigerator");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 3:
						printf("\nYou purchased LG Refrigerator");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 4:
						printf("\nYou purchased Whirlpool Refrigerator");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 5:
						printf("\nYou purchased Panasonic Refrigerator");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					default: 
				        printf("Please enter vaild choice");
				}
				break;
		case 5:
				printf("\n**********Music System**********");
				printf("\n1. Bose");
				printf("\n2. Sony");
				printf("\n3. LG");
				printf("\n4. JBL");
				printf("\n5. KEF\v");
				printf("\nPlease enter the your choice:");
				scanf("%d",&cha);
				switch (cha)
				{
					case 1:
						printf("\n You purchased Bose Music System");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 2:
						printf("\n You purchased Sony Music System");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 3:
						printf("\nYou purchased LG Music System");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 4:
						printf("\nYou purchased JBL Music System");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					case 5:
						printf("\nYou purchased KEF Music System");
						printf("\n----------THANK YOU----------");
						printf("\n Please visit our store again");
						break;
					default: 
				        printf("Please enter vaild choice");
				}
				default:
					printf("Please enter valid choice");
	}
	return 0;
}
