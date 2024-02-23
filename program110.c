/*
            *    *    *   *
            *    $    $   *
            *    $    $   *
            *    *    *   *
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i=0;
    int j=0;
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i==1||j==1||i==iRow||j==iCol)
            {
                printf("*\t"); 
            }
            else
            {
                printf("$\t"); 
            }
        }
        printf("\n\n");
        
    }
}
int main()
{
    int iRow=0; 
    int iCol=0;
    printf("Entre a Rows:");
    scanf("%d",&iRow); 

    printf("Entre a Column:"); 
    scanf("%d",&iCol); 

    Display(iRow,iCol); 
    return 0; 

}