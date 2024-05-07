#include<stdio.h>
#include<assert.h>
float calcRemainingFuel (int vehicleType, float usedFuelQuota);
float calcFuelcost (int vehicleType, float usedFuelQuota);
void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost);

int main(void)
{
	int vehicleType, usedFuelQuota;
	
	printf("Vehicle Types (1/2/3/4)\n\n");
	
	printf("Enter the vehicle type : ");
   	scanf("%d", &vehicleType);
	
	while(vehicleType != -1){
		
    	printf("Enter the use fuel quota : ");
    	scanf("%d", &usedFuelQuota);
    	
    	float remainingQuota = calcRemainingFuel(vehicleType, usedFuelQuota);
    	float fuelPrice = calcFuelcost(vehicleType, usedFuelQuota);
		
		displayDetails(vehicleType, usedFuelQuota, remainingQuota, fuelPrice);
		
		printf("\n\nEnter the vehicle type : ");
    	scanf("%d", &vehicleType);
	}
	
	return 0;
}

float calcRemainingFuel (int vehicleType, float usedFuelQuota)
{
	float  allowedFuelQuota;
	
	if(vehicleType == 1){
		allowedFuelQuota = 5;
	}else if(vehicleType == 2){
		allowedFuelQuota = 20;
	}else if(vehicleType == 3){
		allowedFuelQuota = 20;
	}else if(vehicleType == 4){
		allowedFuelQuota = 30;
	}
	
	return allowedFuelQuota - usedFuelQuota;
}

float calcFuelcost (int vehicleType, float usedFuelQuota)
{
	float fuelPrice;
	
	if(vehicleType == 1 || vehicleType == 2 || vehicleType == 3){
		fuelPrice = 370;
		
	}else if(vehicleType == 3){
		fuelPrice = 570;
	}
	
	return usedFuelQuota * fuelPrice;
}

void displayDetails(int vType, float usedFuelQuota, float remainingQuota, float cost)
{
	printf("\nVehicle type : %d\n", vType);
	printf("used fuel quota : %.2f\n", usedFuelQuota);
	printf("remainingQuota : %.2f\n", remainingQuota);
	printf("Weekly fuel cost : Rs. %.2f\n", cost);
}



