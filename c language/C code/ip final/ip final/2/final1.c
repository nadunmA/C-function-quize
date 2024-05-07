#include<stdio.h>
#include<assert.h>
float calcInterest (int FDType, float depositAmount);
float calcTax (float annualInterest);
void displayDetails (float interest, float taxAmount);

int main(void)
{
	int FDType;
	float depositAmount=0, annualInterest, taxAmount=0;
	
	assert(calcInterest(1,10000)==1600);
	assert(calcInterest(2,10000)==1500);
	
	printf("Fixed Deposit Type : ");
   	scanf("%d", &FDType);
    	
	while(FDType!=-1)
	{
    	printf("Deposit Amount : ");
    	scanf("%f", &depositAmount);
	
    	annualInterest=calcInterest(FDType, depositAmount);
    	taxAmount=calcTax(annualInterest);
    	displayDetails(annualInterest, taxAmount);
    	
    	printf("\n\nFixed Deposit Type : ");
    	scanf("%d", &FDType);
    	
	}
			
}

float calcInterest (int FDType, float depositAmount)
{
	if(FDType == 1)
	   return depositAmount * 0.16;
	else if(FDType == 2)
	        return depositAmount * 0.15;
    	else if	(FDType == 3)
		         return depositAmount * 0.155;
			else if(FDType == 4)
			       return depositAmount * 0.175;     
}
float calcTax (float annualInterest)
{
	return annualInterest * 0.05;
}
void displayDetails (float annualInterest, float taxAmount)
{
	float amountPayble;
	
    amountPayble = annualInterest - taxAmount;
	
	printf("\nAnnual Interest\t\tTax Amount\t\tAmount Payble\n");
	
	printf("%.2f\t\t\t%.2f\t\t\t%.2f", annualInterest, taxAmount, amountPayble);
}

