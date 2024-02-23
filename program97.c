/* 
    *  *   *    *
    *  *    *   *   
    *   *   *   *
*/

#include<stdio.h>
void Display()
{
    int i=0,j=0;
    for(i=0;i<3;i++)  //For Rows 
     {
        for(j=0;j<4;j++)//For Columns
        {
            printf("*\t"); 
        }
        printf("\n"); 
     }
}
int main()
{
    Display(); 
    return 0; 

}