#include<stdio.h>
int main(void)
{
	int A[2][3], B[3][3], C[2][3];
	int i, j, k;
	
	printf("Enter 2 by 3 Matrix\n");
	for(i=0; i<2; i++) 
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the Number : ");
	    	scanf("%d", &A[i][j]);
		}	
	}
	
	printf("\nEnter 3 by 3 Matrix\n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("Enter the Number : ");
	    	scanf("%d", &B[i][j]);
		}
	}
	
	printf("\n(2x3) Matrix\n\n");
	for(i=0; i<2; i++) 
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("\n\n");
		
	}
	
	printf("\n(3x3) Matrix\n\n");
	for(i=0; i<3; i++) 
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", B[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			C[i][j] = 0;
			
			for(k=0; k<3; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	
	printf("\nResulting C matrix(2x3)\n\n");
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d\t", C[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
