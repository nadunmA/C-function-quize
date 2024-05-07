#include<stdio.h>
#include<string.h>
int main(void)
{
	FILE *cfPtr;
	cfPtr=fopen("purchases.txt", "w");
	int i, noOfT; 
	char movie[50], ticketType;
	
	
	if(cfPtr == NULL)
	{
		return -1;
	}
	
	for(i=0; i<5; i++)
	{
		printf("Enter  Movie Name (H/F/S) : ");
		scanf(" %s", movie);
		printf("Entert The Ticket Type(B/N) : ");
		scanf(" %c", &ticketType);
		printf("Enter Number Of Ticket : ");
		scanf("%d", &noOfT);
		printf("\n");
		
		fprintf(cfPtr,"%s\t %c\t %d\n", movie, ticketType, noOfT);
	}

	fclose(cfPtr);
	
	cfPtr=fopen("purchases.txt", "r");
	
	if(cfPtr == NULL)
	{
		return -1;
	}
	
	printf("summary report\n");
	
	char movieSu[3][50] = {"Harry Portor", "Frozon-II", "Sherlock Homes"};
	int balcony[3] = {0,0,0};
	int normal[3] = {0,0,0};	

	while(fscanf(cfPtr,"%s %c %d", movie, &ticketType, &noOfT)!= EOF) {
		for (i = 0; i < 3; i++) {
			if(movie == movieSu[i]) {
				if (ticketType == 'B') {
					balcony[i] += noOfT;
				}else {
					normal[i] += noOfT;
				}
			}
		}
	}
	printf("\n");
	fclose(cfPtr);
	
	for(i=0; i<3; i++)
	{
		printf("%s\n", movieSu[i]);
		printf("\tBalcony - %d\n", balcony[i]);
		printf("\tNormal - %d\n", normal[i]);
	}
	return 0;
		
}
