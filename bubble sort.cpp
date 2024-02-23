//to convert them into function
#include<stdio.h>
int  bubble_sort(int[],int);
int noc=0,pass=0,temp,swap,i,j;

int main()
{
	int num;
	int arr[num];
	printf("entre a number");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("invalid number ");
		return -1; 
	}
//	int noc=0,pass=0,temp,swap;
//	int arr[num];
	for(i=0;i<num;i++)
	{
		printf("entre a value=");
		scanf("%d",&arr[i]);
	}
	//to print the value on screen 
	printf("to display the value before  sort\n ");
	for( i=0;i<num;i++)
	 {
 	printf("%d\n ",arr[i]);
     }
	//to print the array after  sorting 
    bubble_sort(arr,num);  //function call 
	printf("array after sort=\n");
	for( i=0;i<num;i++)
	{
		printf("%d\n",arr[i]);
   }
      printf(" total noc=%d",noc);
      printf("total pass=%d",pass);
      return 0 ;
	}
	int  bubble_sort(int arr[],int num )
	{
	for(i=0;i<num;i++)
     {
     	pass++; 
     	for(j=0;j<num;j++)
     	{
     		noc++;
     		swap=0;//to reset the swap
	   if(arr[j]>arr[j+1])
	        {
	        	swap=1;
	         temp= arr[j];
	        arr[j] =arr[j+1];
	        arr[j+1]=temp;
	        }
	    
	     } 

	        if(swap==0)
	        {
	        	break;
			}
      	}
	
		
	}

