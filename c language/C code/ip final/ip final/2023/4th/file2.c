#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	cfPtr = fopen("hire.txt","r");
	
	int hireNo, km;
	float amountEarned=0, totalAmount=0, amount=0;
	char start[60], destination[60];
	
	if(cfPtr==NULL)
	{
		printf("error");
		return -1;
	} 
	
	printf("Hire No.\tAmount earned\n\n");

	
     while (fscanf(cfPtr, "%d %s %s %d", &hireNo, start, destination, &km) != EOF) {
        
        if (!feof(cfPtr) != EOF) {
        	
            while (fgetc(cfPtr) != '\n');
        }

       
        amount = km * 150.00;
        printf("%d\t\t%.2f\n", hireNo, amount);
		totalAmount += amount;
    }
	
	printf("Total amount:   %.2f", totalAmount);
	
	
	fclose(cfPtr);
}

