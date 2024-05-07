#include <stdio.h>
#include <assert.h>
#include<math.h>
double PayableAmount(char vehicleType, int noOfDays);
double paymentAfterTax(double payment);
void testpaymentAfterTax();

int main(void)
{
    char vehicleType;
    float rentalPerDay, discount;
    int noOfDays;
    double payment, totalPayment = 0;

    testpaymentAfterTax();
    
    printf("Enter Vehicle Type (a/b): ");
    scanf(" %c", &vehicleType);

    printf("Enter Number of days: ");
    scanf("%d", &noOfDays);

    payment = PayableAmount(vehicleType, noOfDays);
    printf("Payable amount before tax: %.2f\n", payment);

    totalPayment = paymentAfterTax(payment);
    printf("Total payable amount after tax: %.2f\n", totalPayment);
    
    return 0;
}

double PayableAmount(char vehicleType, int noOfDays)
{
    double rentalPerDay, discount, PayableAmount = 0;

    if (vehicleType == 'a')
    {
        if (noOfDays >= 1 && noOfDays <= 3)
        {
            rentalPerDay = 5000;
            discount = 0;
        }
        else if (noOfDays >= 4 && noOfDays <= 6)
        {
            rentalPerDay = 5000;
            discount = rentalPerDay * 0.10;
        }
        else if (noOfDays >= 7)
        {
            rentalPerDay = 5000;
            discount = rentalPerDay * 0.20;
        }
    }

    if (vehicleType == 'b')
    {
        if (noOfDays >= 1 && noOfDays <= 3)
        {
            rentalPerDay = 8000;
            discount = 0;
        }
        else if (noOfDays >= 4 && noOfDays <= 6)
        {
            rentalPerDay = 8000;
            discount = rentalPerDay * 0.10;
        }
        else if (noOfDays >= 7)
        {
            rentalPerDay = 8000;
            discount = rentalPerDay * 0.20;
        }
    }
    PayableAmount = rentalPerDay * noOfDays - discount;
    return PayableAmount;
}

double paymentAfterTax(double payment)
{
    double taxRate, totalPayment;

    if (payment > 15000)
    {
        taxRate = 0.10;
    }
    else if (payment >= 10000 && payment <= 15000)
    {
        taxRate = 0.05;
    }
    else
    {
        taxRate = 0;
    }

    totalPayment = payment + (payment * taxRate);
    return totalPayment;
}

void testpaymentAfterTax()
{
	assert((paymentAfterTax(15000) ==15750));
	assert((paymentAfterTax(9000) ==9000));
	assert((paymentAfterTax(18000) ==19800));
}
