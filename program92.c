/////////////////////////////////////////////
//Input :4 
//Output: a b c d 
///////////////////////////////////////////
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0; 
    char ch='a'; 
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("%c\t",ch); 
        ch++; 
    }
    printf("\n"); 
    
}
int main()
{
    int iValue=0; 
    printf("Entre a value:"); 
    scanf("%d",&iValue); 
    Display(iValue); 
    return 0; 

}