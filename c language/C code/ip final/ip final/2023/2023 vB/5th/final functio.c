#include<stdio.h>
#include<assert.h>
float calcpayment(int age, float size);
float calcsubsidy(float payment);
void displayDetails(float payment, float subsidy);

int main(void)
{
	int age, i;
	float size, payment, subsidy;
	
	assert(calcpayment(0, 2.0) == 4200.00);
    assert(calcpayment(2, 1.5) == 3060.00);
	
    for(i=0; i<3; i++)
    {
    	printf("The age of the paddy crops in week : ");
    	scanf("%d", &age);
    	printf("The paddy field size in Hectare : ");
    	scanf("%f", &size);
    	
    	payment = calcpayment(age, size);
    	
    	subsidy = calcsubsidy(payment);
    	
    	printf("The age of the paddy crops in week: %d\n", age);
        printf("The paddy field size in Hectare: %.2f\n", size);
        displayDetails(payment,subsidy);
        printf("\n");
    	
    	
	}
		
	return 0;
}

float calcpayment(int age, float size)
{
	float urea=0, tsp=0, mop=0;
	
	if(age==0) {
		tsp = 35;
	} else if(age==2) {
		urea = 30;
	} else if(age==4) {
		urea = 65;
		mop = 25;
	} else if(age==6) {
		urea = 50;
		mop = 25;
	} else if(age==7) {
		urea = 30;
	} else {
		printf("invalid type\n");
		return -1;
	}
	
	float totalPayment = (urea * 68 + tsp * 60 + mop * 75) * size;
	return totalPayment;
}

float calcsubsidy(float payment)
{
	float subsidy = 0.15 * payment;
	return subsidy;
}

void displayDetails(float payment, float subsidy)
{
	printf("Payable amount = %.2f\n", payment);
    printf("Subsidy amount = %.2f\n", subsidy);
    printf("(Payable amount = %.2f - Subsidy amount = %.2f)\n", payment, subsidy);
}
