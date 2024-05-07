#include<stdio.h>
int main(void)
{
	int matrixS[4][4], i, j, symmetric = 1;
	
	for(i=0; i<4; i++)
	{
		printf("Values for row %d\n", i+1);
		
		for(j=0; j<4; j++)
		{
		    printf("\tEnter element %d : ", j+1);
		    scanf("%d", &matrixS[i][j]);
		}
		printf("\n");
	
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
		    printf("%d  ", matrixS[i][j]);
		}
		printf("\n");
	
	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++) 
		{
			if(matrixS[i][j] != matrixS[j][i]) {
				symmetric =0;
			}
		}
	}
	
	if(symmetric == 1) {
		printf("\nThis is symmetric matrix");
	}else {
		printf("\nThis not symmetric matrix");
	}
	
	
    return 0;
}
