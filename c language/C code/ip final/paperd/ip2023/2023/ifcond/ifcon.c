#include<stdio.h>
int main(void)
{
	int sawanType, NoOfSawan, totalOrder;
	float pricePerSawan, totalAmount=0, serviceCharge=0, delivertCharge=0;
	char orderType;
	
	printf("Chinese Express Family Pack (TYPE=1) Indian Summer Family Pack (Type=2) Special BBQ Family Pack (Type=3)\n");
	
	while(totalOrder < 5) {
		
	char type = 'Y';
	
		printf("\nSawan Type (1/2/3) : ");
    	scanf(" %d", &sawanType);
	
    	if(sawanType == 1) {
	    	pricePerSawan = 7000;
    	}else if(sawanType == 2) {
    		pricePerSawan = 10000;
    	}else if(sawanType == 3) {
    		pricePerSawan = 12000;
    	}else {
    		printf("error Type Try Again");
	    	return -1;
	}
	
    	printf("No of Sawans : ");
    	scanf(" %d", &NoOfSawan);
    	printf("Order Type (I/T/D) : ");
    	scanf(" %c", &orderType);
	
    	if(orderType == 'I') {
    		serviceCharge = 0.05;
    		delivertCharge = 0;
    	}else if(orderType == 'T') {
    		serviceCharge == 0;
    		delivertCharge = 0;
    	}else if(orderType == 'D') {
    		serviceCharge = 0;
    		delivertCharge = 0.10;
    	}else {
	    	printf("error Type Try Again");
	    	return -1;
	    	
	   	
	}
	
	totalAmount = (pricePerSawan * NoOfSawan);
	totalAmount += totalAmount * (serviceCharge + delivertCharge);
   	printf("The amount to be paid : %.2f\n", totalAmount);
   	
   	totalOrder++;
	
	printf("Do you want to input the next order details : ");
	scanf(" %c", &type);
	
	if(type != 'Y') {
		break;
	}
	  		
}
			
	return 0;
}
