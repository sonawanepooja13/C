//program to print the updating  a value in array 
#include<stdio.h>
int main()
{
	int num;
	printf("how many number you want too=");
	scanf("%d",&num);
		if(num<=0)
		{
		printf("invalid number\n");
		return -1;	
		}
		int index,value;
		int arr[num];
		//to print the value 
		
	     	for(int i=0;i<num;i++)
		{
			printf("entre a value\n ");
			scanf("%d",&arr[i]);
		}
		//to display the value on screen
		printf("array before update\n ") ;
		for(int i=0;i<num;i++)
		{
			printf("arr[%d]=%d\n",i,arr[i]);
		}
		printf("entre which index you want the update");
		scanf("%d",&index);
		if(index<0||index>num-1)
		{
			printf("invalid index\n ");
			return -1;
		}
		printf("entre a value=");
		scanf("%d",&value);
		
	      arr[index]=value;
	    printf("array after  update\n ") ;
		for(int i=0;i<num;i++)
		{
			printf("arr[%d]=%d\n",i,arr[i]);
		}
		return 0;
}
