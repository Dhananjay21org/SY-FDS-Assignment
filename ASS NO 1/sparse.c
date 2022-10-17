#include <stdio.h>

int main() 
{
    int i,j,m,n,k=0;
    printf("Enter number of Rows And Columns ==> ");
    scanf("%d%d",&m,&n);
    int A[m][n];
    printf("Enter %d Elements \n",m*n);
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            if(A[i][j]==0)
                k++;
        }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d ",A[i][j]);
        printf("\n");
    }
    
    if(k>(m+n)/2)
        printf("Yes , It is Sparse Matrix\n");
    else 
        printf("It is Not Sparse Matrix\n");
    
    int s[3][m*n-k],p=0;
    for(i=0;i<m;i++)
    {    
        for(j=0;j<n;j++)
        {
            if(A[i][j]!=0)
            {    
                s[p][0]=i;
                s[p][1]=j;
                s[p][2]=A[i][j];
                p++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<p;j++)
            printf("%d ",s[i][p]);
        printf("\n");
    }
    return 0;
}
