#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	cfPtr=fopen("chagers.txt","w");
	int i;
	double number, lcharge, icharge, rcharge;
	
	for(i=0; i<2; i++)
	{
		printf("enter the phone number : ");
		scanf("%lf", &number);
		printf("enter the local call charge : ");
		scanf("%lf", &lcharge);
		printf("enter the international call charge : ");
		scanf("%lf", &icharge);
		printf("enter the romain charge : ");
		scanf("%lf", &rcharge);
		
		fprintf(cfPtr,"%.0f %.2f %.2f %.2f\n",number,lcharge,icharge,rcharge);
			
	}
	fclose(cfPtr);
	
	cfPtr=fopen("chagers.txt","r");
	printf("\nPhone number\tTotal Bill\n");
	fscanf(cfPtr,"%lf %lf %lf %lf",&number,&lcharge,&icharge,&rcharge);
	
	while(!feof(cfPtr))
	{
		printf("%.0f %.2f\n",number+lcharge+icharge+rcharge);
		fscanf(cfPtr,"%lf %lf %lf %lf",&number,&lcharge,&icharge,&rcharge);
	}
	
	
	
	
	
	
}
