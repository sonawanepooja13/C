//to delete the value in array 
#include<stdio.h>
int main()
{
	int num;
	printf("entre a number=");
	scanf("%d",&num);
	if(num<=0)
	{
		printf("invalid number");
		return -1;
	}
	int index; 
	int arr[num];
	for(int i=0;i<num;i++)
	{
	
	printf("entre a value=");
	scanf("%d",&arr[i]);
   }
 //to print the value on screen 
 printf("\n array before sort=");
 for(int i=0;i<num;i++)
   {
 	printf("%d ",arr[i]);
   }
 //to print actual logic here 
 printf(" which index you want to delete =");
 scanf("%d",&index);
 for(int i=index;i<num;i++)
   {
 	arr[i]=arr[i+1];

   }
       num--; 
       printf("\n array after  sort=");
      for(int i=0;i<num;i++)
     {
    	printf("%d ",arr[i]);
     }
  return 0; 
}
