#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	cfPtr=fopen("answers.txt","w");
    int i, arr[4], j, arr1[4], c=0;
    char id[10];
	
	if(cfPtr==NULL)
	{
		printf("error");
		return -1;
	}
	
	for(i=0; i<5; i++)
	{
		printf("enter the Student ID : ");
		scanf("%s", id);
		fprintf(cfPtr, "%s ", id);
		
		for(j=0; j<4; j++)
    	{
    		printf("enter the answers : ");
        	scanf("%d", &arr[j]);
        	fprintf(cfPtr, "%d ", arr[j]);
			
    	}
    	fprintf(cfPtr,"\n");
	}
	
	fclose(cfPtr);
	
	cfPtr=fopen("answers.txt","r");
	
	if(cfPtr==NULL)
	{
		printf("file cannot opened");
		return -1;
	}
	
	fscanf(cfPtr, "%s",id);

	for(j=0; j<4; j++)
	{
		fscanf(cfPtr, "%d",&arr1[j]);
	}
	if(arr1[0]==1)
	   c++;
	   
	if(arr1[1]==4)
	   c++;
	   
	if(arr1[2]==2)
	   c++;
	   
	if(arr1[3]==3)
	   c++;    
          
    
    while(!feof(cfPtr)) 
	{
		printf("%s correct ans %d\n", id,c);
		c=0;
		fscanf(cfPtr, "%s",id);

    	for(j=0; j<4; j++)
    	{
	    	fscanf(cfPtr, "%d",&arr1[j]);
    	}
     	if(arr1[0]==1)
	       c++;
	   
    	if(arr1[1]==4)
    	   c++;
	   
    	if(arr1[2]==2)
    	   c++;
	   
    	if(arr1[3]==3)
    	   c++;    
		
		
		if(arr1[0]==1)
	       c++;
	   
    	if(arr1[1]==4)
	       c++;
	   
    	if(arr1[2]==2)
	       c++;
	   
    	if(arr1[3]==3)
	       c++;
	}
	fclose(cfPtr);
		
}
