#include<stdio.h>
int main(void)
{
	int itemNum, quantitySold, i;
	float priceOfOne;
	
	FILE  *cfPtr;
	cfPtr=fopen("item.txt", "w");
	
	fprintf(cfPtr,"item number\tquantity sold\tPrice of one item\n\n");
	
	for(i=0; i<4; i++)
	{
		printf("enter item number : ");
		scanf("%d", &itemNum);
		printf("enter quantity sold : ");
		scanf("%d", &quantitySold);
		printf("enter priceOfOne : ");
		scanf("%f", &priceOfOne);
		
		fprintf(cfPtr,"%d\t\t %d\t\t %.2f\n", itemNum, quantitySold, priceOfOne);
		
	}
	fclose(cfPtr);
}
