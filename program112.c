/*
iRow=6
iCol=6
#   $   $   $   $   $
*   #   $   $   $   $
*   *   #   $   $   $ 
*   *   *   #   $   $
*   *   *   *   #   $
*   *   *   *   *   $

*/

#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i,j=0;
    for(i=1;i<iRow;i++)
    {
        for(j=1;j<iCol;j++)
        {
            if(i==j)
            {
                printf("#\t");
            }
            else if(i>j)
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
    printf("Entre a Row:");
    scanf("%d",&iRow);

    printf("Entre a Column:");
    scanf("%d",&iCol);

    Display(iRow,iCol); 
    return 0; 

}