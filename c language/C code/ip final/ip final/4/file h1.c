#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	char name[10], nam[10];
	double loyaltyNumber, nmu;
	int i;
		
	for(i=0; i<2; i++)
	{
		printf("enter the name : ");
		scanf("%s", name);
		printf("enter the loyalty number : ");
		scanf("%lf", &loyaltyNumber);
		
		cfPtr=fopen("loyalty.txt", "r");
		fsacnf(cfPtr,"%lf %s", &nmu, nam);
		
		while(!feof(cfPtr))
		{
			fsacnf(cfPtr,"%lf %s", &nmu, nam);
		}
	}
}
