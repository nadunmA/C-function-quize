#include<stdio.h>
#include<assert.h>
float calcpayment(int age, float size);
float calcsubsidy(float payment);
void displayDetails(float payment, float subsidy);

int main(void)
{
	int i, age;
	float size, payment, subsidy;
	
	
	for(i=0; i<3; i++)
	{
		printf("The age of the paddy crops in week : ");
		scanf("%d", &age);
		printf("The paddy field size in Hectare : ");
		scanf("%f", &size);
		
		payment = calcpayment(age,size);
		subsidy = calcsubsidy(payment);
		
		printf("The age of the paddy crops in week: %d\n", age);
        printf("The paddy field size in Hectare: %.2f\n", size);
        displayDetails(payment,subsidy);
        printf("\n\n");
		
	}
	
	
	
	
	return 0;
}

float calcpayment(int age, float size)
{
	float urea=0, tsp=0, mop=0, payment;
	
	if(age == 0) {
		tsp = 35;
		
	}else if(age == 2) {
		urea = 30;
		
	}else if(age == 4) {
		urea = 65;
		mop = 25;
		
	}else if(age == 6) {
		urea = 50;
		mop = 25;
		
	}else if(age == 7) {
		urea = 30;
		
	}else {
		printf("invalid type\n");
		
	}
	
	payment = (urea * 68 + tsp * 60 + mop * 75) + size;
	return payment;
}

float calcsubsidy(float payment)
{
	float subsidy;
	
	subsidy = payment * 0.15;
	return subsidy;
	
}

void displayDetails(float payment, float subsidy)
{
	float paybleAmount;
	
	paybleAmount = payment - subsidy;
	printf("\nPayable Amount : %.2f\tSubsidy Amount : %.2f", payment, subsidy);
	
}
