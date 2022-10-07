#include <stdio.h>
int maximum_in_col(int A[3][3],int col);
int minimum_in_row(int A[3][3],int row);
int main() 
{
    int A[3][3],i,j,min;
    printf("Enter 9 elements\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);  	
    for(i=0;i<3;i++)
    { 
        for(j=0;j<3;j++)
            printf("%d ",A[i][j]);  	
        printf("\n"); 
    }
    for(i=0;i<3;i++)
    {   
        min=minimum_in_row(A,i);
        for(j=0;j<3;j++)
        {
            if(maximum_in_col(A,j)==min)
                printf("\nShaddle Point ==> %d  \n",min);
        }
    }
    printf("\nThank You\n");
    return 0;
}
int minimum_in_row(int A[3][3],int i)
{
    int j,k;
    k=A[i][0];
    for(j=1;j<3;j++)
    {
        if(A[i][j]<k)
            k=A[i][j];    
    }
    return k;
}

int maximum_in_col(int A[3][3],int j)
{
    int i,k;
    k=A[0][j];
    for(i=1;i<3;i++)
    {
        if(A[i][j]>k)
            k=A[i][j];   
    }
    return k;
}
