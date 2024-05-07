#include<stdio.h>
int main(void)
{
	float rainArr[7], average;
	int i, j;
	
	for(i=0; i<7; i++)
	{
		printf("Input the rainfall of day %d : ", i+1);
		scanf("%f", &rainArr[i]);
	}
	printf("\n");

	for(i=0; i<7; i++)
	{
		printf("%.2f\t", rainArr[i]);
	}
	
	
	for(i=0; i<7; i++)
	{
		float sum = 0, max = rainArr[0], min = rainArr[0];
		
		for(j=0; j<=i; j++)
		{
			sum += rainArr[j];
			if(rainArr[i] > max) {
				max = rainArr[j];
			}
			if(rainArr[j] < min) {
				min = rainArr[j];
			}
		}
		
		average = sum / (i+1);
	
     	printf("\n\nDay 1 to %d\n\n", i+1);
    	printf("Average rainfall : %.2f\n", average);
    	printf("Maximiim rainfall : %.1f\n", max);
    	printf("Minimilm rainfall : %.1f\n", min);
    	printf("\n");
		
		
	}
	

}
