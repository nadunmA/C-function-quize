#include<stdio.h>
int main(void)
{
	int matrix[5][5], i, j, temp;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Enter %d,%d : ", i+1,j+1);
			scanf("%d", &matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<(5/2); j++)
		{
			temp = matrix[i][j];
			matrix[i][j]=matrix[i][5-j-1];
			matrix[i][5-j-1]=temp;
		}
	}
	
	printf("\nMirror Image of the Matrix:\n");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}
	
	
	
}
