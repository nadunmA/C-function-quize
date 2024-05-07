#include<stdio.h>
int main(void)
{
	char packageType;
	int noOfParticipants;
	double cost=0, pricePer, totalAmonut=0;
	float discount=0;
	
	printf("Package Type(Gold=G)(Silver=S)(Bronze=B) : ");
	scanf("%c", &packageType);
	
	if (packageType == 'G') {
	    pricePer = 20000;
		
	}else if(packageType == 'S') {
		       pricePer = 15000;
		
	}else if(packageType == 'B') {
		       pricePer = 10000;
	}else{
		printf("invalid type");
		return 1;
	}
	
	printf("No of Participants : ");
	scanf("%d%*c", &noOfParticipants);
	
	if(noOfParticipants > 10)
	{
		discount = totalAmonut + 0.10;
	}
	

    	
    char type = 'Y';
    
    while(type == 'Y') {
    	printf("Do you want an additional Service (Y/N) : ");
    	scanf("%c%*c", &type);
    	
    	char additionalService;
    	
    	if(type == 'Y') {
    		printf("Enter the service you like to book (C/V/E) : ");
    		scanf("%c%*c", &additionalService);
    		
    		if(additionalService == 'C') {
    			cost += 5000;
			}else if(additionalService == 'V') {
				cost += 7500;
			}else if(additionalService == 'E') {
				cost += 10000;
			}else {
				printf("invalid type\n");
				return 1;
			}
	
		}
		
	}
	
		
	totalAmonut = (noOfParticipants * pricePer) + cost;
	totalAmonut -=(pricePer * noOfParticipants * discount);
	printf("Total Amount to be paid: Rs.%.2lf ", totalAmonut);
		
}
