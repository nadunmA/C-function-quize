#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	cfPtr=fopen("item.txt", "r");
	
	int itemNum, quantitySold;
	float totalAmount, discount=0, priceOfOne;
	
	if(cfPtr==NULL)
	{
		printf("error");
		return 1;
	}

	
	printf("Item No.\tTotal Amount\n");
	
	while(fscanf(cfPtr,"%d %d %f", &itemNum, &quantitySold, &priceOfOne) != EOF)
	{
		totalAmount = quantitySold * priceOfOne;
		if(quantitySold > 3) {
			discount = totalAmount * 0.05;
			totalAmount -= discount;
		}
		printf("%d\t%.2f\n", itemNum, totalAmount);
	}

	fclose(cfPtr);
}
