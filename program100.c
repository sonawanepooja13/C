
/*  
   1    2   3   4   
   1   2   3    4   
   1   2    3   4   
*/ 


//To Accept a Value from user
#include<stdio.h>
void Display(int iRow,int iCol)
{
    int i,j; 
    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf("%d\t",j); 
        }
    printf("\n"); 
    }
}
int main()
{
    int iRow=0;
    int iCol=0; 

    //to accept input for rows 
    printf("How many Rows you want to require:"); 
    scanf("%d",&iRow); 

    printf("How many Column you want to require:"); 
    scanf("%d",&iCol); 
    // Function Call
    Display(iRow,iCol); 
    return 0;

}