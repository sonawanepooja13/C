//To print the pattern 
//1 2   3   4   5   6   
//* *   *   *   *   *

#include<stdio.h>
//Function Defination 
void Display()
{
    int iCnt=0; 
    for(iCnt=1;iCnt<=6;iCnt++)
    {
        printf("*\t"); 
    }
    printf("\n"); 
}
int main()
{
    //Function Call 
    Display(); 

    return 0; 

}