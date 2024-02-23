// write a c program to find sum of element in a given array 
#include<stdio.h>
#define SIZE 50
int main()
{
	int no; 
	int i,j ,sum=0;
	int arr[SIZE]={0};
	printf("how many number you want to take:\t "); 
	scanf("%d",&no); 
	 for(i=0;i<no;i++)
	 {
	 	printf("entre a value"); 
	 	scanf("%d",&arr[i]); 
	 	
	 }
	 // to print the value on the array 
	 printf("***given array****\n");
     for(i=0;i<no;i++)
     {
     	printf("%d\t ",arr[i]); 
	 }
	 // to print the sum of given array 
	 printf("\n sum of total number in an given array\n "); 
	 for(i=0;i<no;i++)
	 {
	 	sum=sum+arr[i]; 
	 }
	 printf("sum of array:%d\t ",sum); 
	 return 0; 
	 
}
