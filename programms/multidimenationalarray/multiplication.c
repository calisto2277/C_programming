#include<stdio.h>
#include<time.h>
int main()
{
    clock();
    int arr1[2][3]={{2,3,5},{1,4,8}};
    int arr2[3][2]={{1,2},{3,4},{5,7}};
    int mat[2][2];
    int sum=0;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum+=arr1[i][k]*arr2[k][j];
            }
                mat[i][j]=sum;
                sum=0;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
    

}