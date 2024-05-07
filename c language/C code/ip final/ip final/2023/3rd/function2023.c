#include<stdio.h>
#include<assert.h>

float calcPayment(float medicalCharge, int type, int days);
float calcDiscount(char seniorCitizen, char loyaltyMember);
void testCalcPayment();

int main(void)
{
	int type, days;
	float medicalCharge, payment, discount, totalDiscount, accommodationCharge;
	char seniorCitizen, loyaltyMember;
	
	printf("Enter the Medical Charge : ");
	scanf("%f", &medicalCharge);
	printf("Enter Accommodation Type : ");
	scanf("%d", &type);
	printf("Enter the Number of days Stayed : ");
	scanf("%d", &days);
	printf("Youre are Senior Citizen(Y/N) : ");
	scanf("%c%*c", &seniorCitizen);
	printf("Youre are loyalty Member(Y/N) : ");
	scanf("%c%*c", &loyaltyMember);
	
	payment = calcPayment(medicalCharge,type,days);
	discount = calcDiscount(seniorCitizen,loyaltyMember);
	
  
    
     printf("Total Payment: Rs. %.2f\n", payment);
     printf("Discount: Rs. %.2f\n", discount);
	
	
	
	
	
	return 0;
}

float calcPayment(float medicalCharge, int type, int days)
{
	float accommodationCharge;
	
	if(type == 1)
	   return accommodationCharge = 17000;
	else if(type == 2)
	        return accommodationCharge = 25000;
	else if(type == 3)
	    	return accommodationCharge = 32000; 
			
	medicalCharge + (accommodationCharge * days);			  
}

float calcDiscount(char seniorCitizen, char loyaltyMember)
{
	float discount, payment, totalDiscount;
	
	if(seniorCitizen == 'Y') {
		return discount += 0.05;
	}
	if(loyaltyMember == 'Y') {
		return discount += 0.10;
	}	
	
	discount = payment * totalDiscount / 100;
	
}



	
