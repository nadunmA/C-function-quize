#include<stdio.h>
int main(void)
{
	int itemNum, quantitySold, priceOfOne;
	int i;
	
	FILE *cfPtr;
	cfPtr=fopen()
	
	if(cfPtr==NULL)
	{
		printf("error");
		return -1;
	}
	
	
	fprintf("Item number\tquantity sold\tprice of one item\n");
	
	for(i=0; i<4; i++)
	{
		printf("enter item number : ");
		scanf("%d", &itemNum);
		printf("enter  quantity sold : ");
		scanf("%d", &quantitySold);
		printf("enter price of one item : ");
		scanf("%d", &priceOfOne);
		
		fprintf(cfPtr,"%d %d %d", &itemNum, &quantitySold, &priceOfOne);
	}
}
