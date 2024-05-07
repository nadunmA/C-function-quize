#include<stdio.h>
#include <string.h>
int main(void)
{
	FILE *cfPtr;
	cfPtr=fopen("Items.dat","w");
	
	int itemCode, i;
	char name[200];
	
	if(cfPtr == NULL)
	{
		printf("error");
		return -1;
	}
	
	for(i=0; i<5; i++)
	{
		printf("enter item code : ");
		scanf("%d", &itemCode);
		printf("enter name : ");
		scanf("%s", name);
		
		fprintf(cfPtr,"%d\t %s\n", itemCode, name);
	}
	fclose(cfPtr);
	
	cfPtr=fopen("Items.dat","r");
	
	int found;
	char sname[200]; 
	
	if(cfPtr == NULL)
	{
		printf("error");
		return -1;
	}
	
	printf("\nenter name to search : ");
	scanf("%s", name);
	
	fscanf(cfPtr,"%d\t %s\n", itemCode, name);
	while(!feof(cfPtr))
	{
		if(sname, name == 0)
		{
			printf("Item found!\n");
            printf("Item Code: %d\n", found);
            found =0;
            break;
		}
	}
	fclose(cfPtr);
	
	
    if (!found)
    {
        printf("Item not found!\n");
    }
   
	return 0;
}
