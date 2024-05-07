#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	cfPtr = fopen("hire.txt","w");
	
	int hireNo, km, i;
	char start[60], destination[60];
	
	
	fprintf(cfPtr,"Hire No\t\tStart\t\tDestination\t\tDistance(km)\n\n");
	
	for(i=0; i<4; i++)
	{
		printf("Hire No :");
    	scanf("%d", &hireNo);
    	printf("Satrt :");
    	scanf("%s", start);
    	printf("Destination :");
    	scanf("%s", destination);
     	printf("Distance :");
    	scanf("%d", &km);
    	
    	fprintf(cfPtr,"%d\t\t%s\t\t%s\t\t%d\t\n", hireNo, start, destination, km);
	}
	fclose(cfPtr);	
	
	
	
	

}
