#include<stdio.h>
int main()
{
	int num,value,flag=0;
	printf("how many number you want to=");
	scanf("%d",&num);
	if(num<=0)
{
	printf("invalid number\n ");
	return -1;
}
  int arr[num];
  for(int i=0;i<num;i++)
  {
  	printf("entre a value=");
  	scanf("%d",&arr[i]);
  }
  //to display the value onm screen 
  printf("to display the value =");
  for(int i=0;i<num;i++)
  {
  printf("%d ",arr[i]);	
  }
  int index;
//to start logic here searching 
printf("entre value to search =");
scanf("%d",&value);
for(int i=0;i<num;i++)
 {
	index++;
	 {
	if(value==arr[i])
	flag=1;
      }
 }
   
if(flag==1)
      {
	printf("%d value is found at %d index",value,index);
    }
else
    {
	printf("%d value is not found ",value);
    }
return 0; 
}
