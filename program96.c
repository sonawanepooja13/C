/* 
//////////////////////////////
    *  *   *    *
    *  *    *   *   
    *   *   *   *
////////////////////////////
*/

#include<stdio.h>
void Display()
{
    int iCnt=0; 
    //Line 1
    for(iCnt=1;iCnt<=4;iCnt++)
    {
        printf("*\t");
    }
    printf("\n"); 
    //Line 2 
    for(iCnt=1;iCnt<=4;iCnt++)
    {
        printf("*\t");
    }
    printf("\n"); 
    //Line 3
    for(iCnt=1;iCnt<=4;iCnt++)
    {
        printf("*\t");
    }
    printf("\n"); 
    

}
int main()
{
    Display(); 

    return 0;

}
