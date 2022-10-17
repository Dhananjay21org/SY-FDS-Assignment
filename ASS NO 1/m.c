
#include<stdio.h>
int Greater_in_col(int A[3][3],int j);
int Smaller_in_row(int A[3][3],int i);
int main()
{
    int *p,*q,A[3][3],B[3][3],C[3][3],i,j,k,row,temp=0,choise;
    p=A;
    q=B;
    printf("1.Matrix Saddle Point\n");
    printf("2.Matrix Sum\n");
    printf("3.Matrix Multiplication\n");
    printf("\nEnter Your Choise ==>");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:
            printf("Enter 9 Elements\n");
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    scanf("%d",(p+j)+3*i);
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    printf("%d  ",*((p+j)+3*i));
                printf("\n");
            }
            for(i=0;i<3;i++)
            {
                row=Smaller_in_row(A,i);
                for(j=0;j<3;j++)
                    if(row==Greater_in_col(A,j))
                    {
                        printf("Saddle Point ==> %d ",row);
                        temp=1;
                        break;
                    }
                    else
                        temp=0;
                if(temp)
                    break;
            }
            if(temp==0)
                printf("No Saddle Point");
        break;
        case 2:
            printf("Enter 9 Elements\n");
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    scanf("%d",(p+j)+3*i);
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    printf("%d  ",*(p+j+3*i));
                printf("\n");
            }
            printf("\nEnter 9 Elements\n");
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    scanf("%d",q+j+3*i);
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    printf("%d  ",*(q+j+3*i));
                printf("\n");
            }
            printf("\nSum\n");
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    printf("%d  ",*(p+j+3*i)+(*(q+j+3*i)));
                printf("\n");
            }
        break;
        case 3:
            printf("Enter 9 Elements\n");
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    scanf("%d",(p+j)+3*i);
            for(i=0;i<3;i++)
            {
                for(j=0;j<3;j++)
                    printf("%d  ",*(p+j+3*i));
                printf("\n");
            }
            printf("\nEnter 9 Elements\n");
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                    scanf("%d",q+j+3*i);
            
            for(i=0;i<3;i++)
                for(j=0;j<3;j++)
                {
                    for(k=0;k<3;k++)
                    {    
                        C[i][j]=C[i][j]+A[i][k]*B[k][j];
                    }
                }
            printf("mult ==>\n");
            for(i=0;i<3;i++)
            { 
                for(j=0;j<3;j++)
                    printf("%2d ",C[i][j]);  //*(p+i)+j	
                printf("\n"); 
            }
        break;
        
    }
    return 0;
}
int Greater_in_col(int A[3][3],int j)
{
    int i,k;
    k=A[0][j];
    for(i=0;i<3;i++)
        if(k<A[i][j])
            k=A[i][j];
    
    return k;
}
int Smaller_in_row(int A[3][3],int i)
{
    int j,k;
    k=A[i][0];
    for(j=0;j<3;j++)
        if(k>A[i][j])
            k=A[i][j];
    
    return k;
}
