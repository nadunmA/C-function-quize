#include<stdio.h>
#define SIZE 10
int main(void)
{
	float prices[SIZE];
	int i, noOfProductCost=0;
	float totalCost=0, highestPrice=0, sum=0;
	
	printf("Enter the prices of 10 product\n");
	
	for(i=0; i<SIZE; i++) {
		printf("Product %d : ", i+1);
		scanf("%f", &prices[i]);
	}
	
	for(i=0; i<SIZE; i++) {
		sum += prices[i];
		if( prices[i] > highestPrice) {
			highestPrice = prices[i];
		}
	}
	
	for(i=0; i<SIZE; i++) {
		if(prices[i] < 100.0) {
			noOfProductCost++;
		}
		if(prices[i] > 500.0) {
			totalCost += prices[i];
		}
	}
	
	float average = sum / 10.0;
	

	printf("Average price : %.2f\n", average);
	printf("Highest price : %.2f\n", highestPrice);
	printf("Number of products less than Rs.100: %d\n", noOfProductCost);
	printf("Total cost of products more than Rs.500.00: Rs.%.2f", totalCost);
	
	return 0;
}
