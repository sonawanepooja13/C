//Input :4
//output // a b c d 
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0; 
    char ch='a'; 
    //     1       2          3 //Multiple thing seperated by commans 
    for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
    {
        printf("%c\t",ch);//4
    }
    printf("\n");
    
}
int main()
{
    int iValue=0;
    printf("Entre a Value:");
    scanf("%d",&iValue); 
    Display(iValue); 
    return 0; 

}