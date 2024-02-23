/*
 1  *  *   *
 *  2  *   *
 *  *  3  *
 *  *  *   4
 */


 #include<stdio.h>
 void Display(int iRow,int iCol)
 {
    for(int i=1;i<=iRow;i++)
    {
        for(int j=1;j<=iCol;j++)
        {
            if(i==j)
            {
                printf("%d\t",i); 
            }
            else
            {
                printf("*\t"); 
            }
        }
        printf("\n\n"); 
        
    }
 }
 int main()
 {
    int iRow=0;
    int iCol=0; 
    printf("Entre a Row:\t"); 
    scanf("%d",&iRow); 

    printf("Entre a Column:\t"); 
    scanf("%d",&iCol); 

    Display(iRow,iCol); 
    return 0; 

 }