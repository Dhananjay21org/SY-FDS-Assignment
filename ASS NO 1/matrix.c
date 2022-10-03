#include<stdio.h>
int main()
{
 int *p,*q,A[3][3],B[3][3],i,j,C[3][3]={0},k;
 p=A;
 q=B;
 printf("Enter 9 elements\n");
 for(i=0;i<3;i++)
    for(j=0;j<3;j++)
        scanf("%d",(p+(i*3)+j));  	
 for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    printf("%d ",*(p+i*3+j));  //*(p+i)+j	
   printf("\n"); 
 }
 printf("Enter 9 elements\n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   scanf("%d",(q+(i*3)+j));  	
 for(i=0;i<3;i++)
 { 
   for(j=0;j<3;j++)
    printf("%d ",*(q+i*3+j));  //*(p+i)+j	
   printf("\n"); 
 }
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   C[i][j]=*(p+i*3+j)+*(q+i*3+j);   //A[i][j]+B[i][j]
    printf("Sum ==>\n");
 for(i=0;i<3;i++)
 { 
    for(j=0;j<3;j++)
        printf("%2d ",C[i][j]);  //*(p+i)+j	
    printf("\n"); 
 }
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  {
    for(k=0;k<3;k++)
    {    
        C[i][j]=C[i][j]+A[i][k]*B[k][j];   //A[i][j]+B[i][j]
    }
  }
 printf("mult ==>\n");
 for(i=0;i<3;i++)
 { 
    for(j=0;j<3;j++)
        printf("%2d ",C[i][j]);  //*(p+i)+j	
    printf("\n"); 
 }
 return 0;
}
