/*
 $  $   $   $ 
 $   &  $    &
 $   &   $   &
 $   &   $   &
 */


 #include<stdio.h>
 void Display(int iRow,int iCol)
 {
    for(int i=0;i<iRow;i++)
    {
        for(int j=0;j<iCol;j++)
        {
            if((j%2)==0)
            {
                printf("$\t"); 
            }
            else
            {
                printf("&\t"); 
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