#include<stdio.h>
int power(int,int);
void add(int A[3][3],int B[3][3]);//declare
void sub(int A[3][3],int[3][3]);
void multi(int A[3][3],int[3][3]);
void printMatrix(int arr[3][3]);
int main()
{
    int Y[3][3]={{0,power(2,2),2},{1,1,2},{0,power(2,3),power(1,2)}};
    int O[3][3]={{3,power(3,2),power(3,2)},{power(3,2),0,power(2,2),},{1,power(2,1),2}};
    add(Y,O);
    printf("\n-------------------------------------------------------------\n");
    sub(Y,O);
    printf("\n-------------------------------------------------------------\n");
    multi(Y,O);
}
int power(int e ,int x)//definition
{
    int result=1;
    for(int i=0;i<x;i++)
    {
        result=result*e;
    }
    return result;
}
void add(int A[3][3],int B[3][3])//definition
{
    int sum[3][3];
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
      sum[i][j]=A[i][j]+B[i][j];
    }
   }
   printMatrix(sum);
}

void sub(int A[3][3],int B[3][3])//definition
{
    int minus[3][3];
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
     minus[i][j]=A[i][j]-B[i][j];
    }
   }
   for(int i=0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",minus[i][j]);
    }
    printf("\n");
 }
}
void multi(int A[3][3],int B[3][3])//definition
{
    int pro[3][3];
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {   
        pro[i][j] = 0;
        for(int k=0;k<3;k++)
        {
          pro[i][j] += A[i][k]*B[k][j];
        }
    }
   }
   for(int i=0;i<3;i++)
 {
    for(int j=0;j<3;j++)
    {
        printf("%d\t",pro[i][j]);
    }
    printf("\n");
 }
}

void printMatrix(int arr[3][3]){
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\t", arr[i][j]);
        } printf("\n");
    }
}



