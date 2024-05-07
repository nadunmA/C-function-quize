#include<stdio.h>
#include<assert.h>

float calcpayment(int offPeak, int peak);
float calcservicecharge(int offPeak, int peak);
void testcalcpayment();

int main(void)
{
	int i, peak, offPeak;
	float elecPayment, monthlyBill, sCharge;
	
	testcalcpayment();
	
	for(i=0; i<5; i++)
	{   printf("Monthly Bill Payment for Customer %d\n\n", i + 1);
	
		printf("enter no. of units used in peak hours : ");
		scanf("%d", &peak);
		printf("enter no. of units used in off peak hours : ");
		scanf("%d", &offPeak);
		
		elecPayment = calcpayment(offPeak, peak);
		sCharge = calcservicecharge(offPeak, peak);
		
		monthlyBill = elecPayment + sCharge;
		
		printf("elctricity payment : LKR %.2f\n", elecPayment);
		printf("service charge : LKR %.2f\n", sCharge);
		printf("total monthly : LKR %.2f\n", monthlyBill);
		
	}
	
}

float calcpayment(int offPeak, int peak)
{
	float charge1, charge2;
	
	if(peak >= 0 || peak <=100)
	{
		charge1 = peak * 45.00;
		
	}else if(peak >= 101 || peak <=200)
	{
		charge1 = peak * 65.00;
		
	}else if(peak > 200)
	{
		charge1 = peak * 90.00;
	}
	
	
	if(offPeak >= 0 || offPeak <=100)
	{
		charge2 = offPeak * 35.00;
		
	}else if(offPeak >= 101 || offPeak <=200)
	{
		charge2 = offPeak * 50.00;
		
	}else if(offPeak > 200)
	{
		charge2 = offPeak * 70.00;
	}
	
	return charge1 + charge2;
}

float calcservicecharge(int offPeak, int peak)
{
	float sCharge;
	int tUnit;
	
	if(tUnit <= 150)
	{
		sCharge = 600;
		
	}else if(tUnit >= 151 || tUnit <= 250)
	{
		sCharge = 700;
		
	}else if(tUnit > 250)
	{
		sCharge = 1500;
	}
	
	return sCharge;
}

void testcalcpayment()
{
	assert(calcpayment(100, 100) == 8000);
	assert(calcpayment(50, 50) == 00);
}


