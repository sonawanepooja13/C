//an array consist of an integer.write a c program to couunt number
//of element less than , greater than or equal to zero 
#include<stdio.h>
#define SIZE 100
int main()
{
	int cnt=0,cnt1=0,cnt2=0;
	int no,i,j; 
	int arr[SIZE]={0}; 
	printf("how many number you want to take "); 
	scanf("%d",&no); 
	if(no<0)
	{
		printf("invalid choice\n "); 
		return 0; 
	}
	printf(" ------------array-----------\n "); 
	for(i=0;i<no;i++)
	{
		printf("entre a value:"); 
		scanf("%d",&arr[i]); 
	}
	// to print the array 
	printf("Array before check condition\n "); 
	for(i=0;i<no;i++)
	{
		printf("%d ",arr[i]); 
	}
	// to cheeck the condition 
	for(i=0;i<no;i++)
	{
		if(arr[i]==0)
		{
			cnt++;
		}
		else if (arr[i]>0)
		{
			cnt1++; 
		}
		else if(arr[i]<0)
		{
			cnt2++;
	    }
	
	}
	printf("\n "); 
	printf(" count of zero::%d\n ",cnt); 
	printf(" count of positive::%d\n ",cnt1); 
	printf(" count of negative ::%d\n ",cnt2); 
}