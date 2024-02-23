//Input : 4 
//Output: -4 -3 -2 -1 0 1 2 3 4 
//It should display the number line 
///////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=-iNo;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n"); 

}
//////////////////////////////////////////////////
//  Main Function  //////////////////////////
int main()
{
    int iValue=0; 
    printf("Entre the Count :\n"); 
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}
