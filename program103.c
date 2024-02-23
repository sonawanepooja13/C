/*

 iRow=4 
 iCol=4 
1->  1  1   1   1   
2->  *  *   *   * 
3->  3  3   3   3   
4->  *  *   *   *
*/
//Value can Change i row wise  so perform operation on Rows


#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i=0,j=0; 
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            if(i%2==0)
            {
                printf("*\t"); 
            }
            else
            {
              printf("%d\t",i);
            }
            
        }
        printf("\n");

    }

}
int main()
{
    int iRow=0; 
    int iCol=0; 
    printf("How many Rows you require:");
    scanf("%d",&iRow); 

    printf("How many Column you require");
    scanf("%d",&iCol); 
    Display(iRow,iCol); 
    return 0; 
}
