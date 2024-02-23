//write a c program to seperate even and odd number in an array 
#include<stdio.h>
#define SIZE 100
int main()
{
	int arr[SIZE]={0}; 
	int no ,i,j;
	printf(" how many number you want to take::"); 
	scanf("%d",&no); 
	printf("**********Given Array***********\n "); 
	for(i=0;i<no;i++)
	{
		printf("entre  a value:");
		scanf("%d",&arr[i]); 
	}
	// to print the value on the screen 
	printf("\n ARRAY BEFORE SEPERATING::");
	for(i=0;i<no;i++)
	{
		printf("%d\t",arr[i]); 
	}
	printf("\n");
	// to print the logic of seperating array 
	for(i=0;i<no;i++)
	{
		if(arr[i]%2==0)
		{
			printf(" even:%d\t\n ",arr[i]);
	
		}
		 
		else if(arr[i]%2==1)
		{
			printf(" odd :%d\t\n ",arr[i]); 

		}
	 
		else
		{
			printf("you entre a invalid choice\n "); 
		}
	}
	return 0; 
}