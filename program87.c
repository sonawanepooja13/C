//Input :6
//Output :  1   2   3   4   5   6   
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("%d\t",iCnt+1); 
    }
    printf("\n"); 
    
}
int main()
{
    int iValue=0; 
    printf("Entre a Count:");
    scanf("%d",&iValue); 
    Display(iValue); 
    return 0; 

}