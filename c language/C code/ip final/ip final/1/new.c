#include<stdio.h>
int main(void)
{
	int pizzaType, noOfPizza;
	char pizzaSize, type;
	float cost=0, discount, billAmount=0, netAmount=0;
	
	printf("Input pizza type : ");
	scanf("%d%*c", &pizzaType);
	
	while(pizzaType!=-1)
	{
	if(pizzaType==1 || pizzaType==2)
	{
		printf("Input the pizza size : ");
	    scanf("%c", &pizzaSize);
	    
		if(pizzaSize=='L' || pizzaSize=='M')
		{
			printf("Input the number of pizzas : ");
	        scanf("%d", &noOfPizza);
	        
		}else
		{
			printf("invalid size");
		}
		
	}else
	{
		printf("invalid type");
	}
	
	if(pizzaType == 1)
	{
		if(pizzaSize =='L')
		{
			cost = noOfPizza * 1720.00;
		}
		else
		{
			cost = noOfPizza * 975.00;
		}
	}
	if(pizzaType == 2)
	{
		if(pizzaSize =='L')
		{
			cost = noOfPizza * 1820.00;
		}
		else
		{
			cost = noOfPizza * 1000.00;
		}
	}
	billAmount = billAmount + cost;
	printf("\nInput pizza type : ");
	scanf("%d%*c", &pizzaType);
	
    }
    
    printf("Are you paying by credit card (Y/N) : ");
    scanf("%c%*c", &type);
    
    if(type == 'Y')
    {
    	discount = billAmount * 0.02;
    	printf("Are you a loyalty customer (Y/N)? : ");
        scanf("%c%*c", &type);
        printf("Is this an online order (Y/N)? : ");
        scanf("%c%*c", &type);
        
	}
	else if(type == 'N')
	{
		printf("Are you a loyalty customer (Y/N)? : ");
        scanf("%c%*c", &type);
        discount = billAmount * 0.15;
        printf("Is this an online order (Y/N)? : ");
        scanf("%c%*c", &type);
        
	}
	else if(type == 'Y')
	{
		printf("Is this an online order (Y/N)? : ");
        scanf("%c%*c", &type);
        discount = billAmount * 0.05;
	}
	
	netAmount = billAmount - discount;
	printf("\nTotal bill amount : %.2f", billAmount);
	printf("\nDiscount : %.2f", discount);
	printf("\nNet amount : %.2f", netAmount);
	
	 
}
