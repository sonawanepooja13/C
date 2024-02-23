//  1   2   3   4   5   
//  *   *   *   *   * 
#include<stdio.h>

//Fuunction Defination 

void Display(int iNo)
{
    int iCnt=0; 
    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("*\t"); 
    }
    printf("\n"); 
    
}
int main()
{
    int iValue=0; 
    printf("Entre a Count:\n"); 
    scanf("%d",&iValue); 
    //Function CaLL 
    Display(iValue); 

    return 0; 
}