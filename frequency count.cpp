// Q 7)write a c program to find frequency of each element in an array 
#include<stdio.h>
#define SIZE 100 
int main()
{
	int arr[SIZE]={0}; 
	int brr[SIZE]={0}; 
	int ctrl=0;
	int no,i,j; 
	int cnt;
	printf("how many number you  want to take::");
	scanf("%d",&no); 
	printf("*********** array list ****************\n ");
	for(i=0;i<no;i++)
	{
		printf("entre value::"); 
		scanf("%d",&arr[i]); 
		brr[i]=-1; 
	}
	
// to print the frequency of each element 
	for(i=0;i<no;i++)
	{
		ctrl=1; 
		for(j=i+1;j<no;j++)
		{
			if(arr[i]==arr[j])
			{
				  ctrl++; 
				  brr[j]=0; 
			}
		}
		if(brr[i]!=0)
		{
			brr[i]=ctrl;
		}
	}
	printf(" the frequency of all element in an array\n");
	for(i=0;i<no;i++)
	{
		if(brr[i]!=0)
		{
			printf("%d occours->%d times->\n ",arr[i],brr[i]); 
		}
	}
	return 0; 
}