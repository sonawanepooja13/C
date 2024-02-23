// write a c program to copy one number of array into the another nmber 
#include<stdio.h>
#define SIZE 50
int main()
{
	int no,i,j; 
	int arr[SIZE];
	int brr[SIZE]={0};
	printf(" how many number you take:"); 
    scanf("%d",&no); 
    for(i=0;i<no;i++)
    {
    	printf("entre a value:"); 
    	scanf("%d",&arr[i]); 
    	
	}
	printf("\n");
	// to print the value on the screen 
	printf("\n ******array before copy******\n ");
	for(i=0;i<no;i++)
	{
		printf("%d->",arr[i]); 
	}
	printf("\n array after copy  in brr[i]\n "); 
	for(i=0;i<no;i++)
	{
		brr[i]=arr[i];
		printf("::%d->\t ",brr[i]); 
	}
	return 0; 
}
