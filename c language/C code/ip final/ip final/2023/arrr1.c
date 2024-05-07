#include<stdio.h>
int main(void)
{
	int array1[7]={2,4,6,8,10,12,14};
	int array2[7]={0};
	int array3[7]={0};
	int i, total=0;
	
	for(i=0; i<7; i++)
	{
		array2[i] = array1[i] * array1[i];
	}
	
	for(i=0; i<7; i++)
	{
		array3[i] = array1[i] + array2[i];
	}
	
	printf("Index\tValue\n");
	for(i=0; i<7; i++)
	{
		printf("%d\t%d\n", i, array3[i]);
	} 
	
	for(i=0; i<7; i++)
	{
		total+=array3[i];
	}

	printf("\nTotal of array3 elements is %d", total);
	
	
}
