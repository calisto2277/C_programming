#include <stdio.h>
int power(int e, int x);
void add(int arr1[3][3], int arr2[3][3], int arr3[3][3]);
int fac(int x);
void multi(int arr[3][3], int arr2[3][3]);
void printmatrix(int mat[3][3]);
int main()
{
    int A[3][3], B[3][3], C[3][3], x = 2;
    printf("enter the elements of matrix A\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j] = power(A[i][j], 2);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            A[i][j]= 2 * A[i][j];
        }
    }
    printmatrix(A);
    printf("\n--------------------------\n");
    printf("enter the elements of matrix B\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            B[i][j]=fac(B[i][j]);
        }
    }
    printmatrix(B);
    printf("\n----------------------------\n");
    printf("enter the elements of matrix C\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &C[i][j]);
        }
    }
    printmatrix(C);
    printf("\n-----------------------------\n");
    add(A, B, C);
    printf("\n-----------------------------\n");
    return 0;
}
int power(int e, int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result = e * result;
    }
    return result;
}
int fac(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result = result * i;
    }
    return result;
}
void add(int arr1[3][3], int arr2[3][3], int arr3[3][3])
{
    int sum[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j] + arr3[i][j];
        }
    }
    printmatrix(sum);
}
void multi(int arr1[3][3], int arr2[3][3])
{
    int pro[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            for (int k = 0; k <= 3; k++)
            {
                pro[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}
void printmatrix(int mat[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}
