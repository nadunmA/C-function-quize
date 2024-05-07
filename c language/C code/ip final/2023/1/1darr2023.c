#include<stdio.h>
int main(void)
{
	int arry1[7]={0};
	int arry2[7]={0};
	int arry3[7]={0};
	int b;
	
	for(b=0; b<7; b++)
	{
		printf("Insert array1[%d]: ", b+0);
		scanf("%d", &arry1[b]);
	}
	printf("\n");
	printf("Array1 numbers\n\n");
	for(b=0; b<7; b++)
	{
		printf("%d\t", arry1[b]);
	}
	
	printf("\n\nArray2 numbers\n");
	for(b=0; b<7; b++) 
	{
		arry2[b] = arry1[6-b];
	}
	printf("\n");
	
	for(b=0; b<7; b++)
	{
		printf("%d\t", arry2[b]);
	}
	printf("\n\nArray3 numbers\n");
	for(b=0; b<7; b++)
	{
		arry3[b] = arry1[b] * arry2[b];
	}
	for(b=0; b<7; b++)
    {
    	printf("%d\t\n", arry3[b]);
	}
	
}
