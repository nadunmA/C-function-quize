#include<stdio.h>
int main(void)
{
	char packageType;
	int noOfpp;
	float total=0, priceP, cost=0, discount=0;
	
	printf("Package Type(G/S/B) : ");
	scanf(" %c", &packageType);
	
	if(packageType == 'G') {
		priceP = 20000;
	}else if(packageType == 'S') {
		priceP = 15000;
	}else if(packageType == 'B') {
		priceP = 10000;
	}

	printf("No of Participants : ");
	scanf(" %d", &noOfpp);
	
	if(noOfpp > 10) {
		discount = total + 0.10;
	}
	
	char type = 'Y';
	
	while(type == 'Y') {
		printf("Do you want an additional Services(Y/N) : ");
		scanf(" %c", &type);
		
		if(type == 'Y') {
			char aSerice;
			printf("Enter the service you like to book(C/V/E) : ");
			scanf(" %c", &aSerice);
			
			if(aSerice == 'C') {
				cost += 5000;
			}else if(aSerice == 'V') {
				cost += 7500;
			}else if(aSerice == 'E') {
				cost += 10000;
			}else {
				printf("error type");
				return -1;
			}
		}
	}
	
	
	total = (priceP * noOfpp) + cost;
	total -= (priceP * noOfpp * discount);
	printf("Total Amount to be Paid: Rs.%.2f", total);
	
	return 0;
}
