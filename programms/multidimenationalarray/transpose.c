#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the number of rows in 1st matrix\n");
    scanf("%d", &n);
    printf("enter the number of coloumns in 1st matrix\n");
    scanf("%d", &m);
    int arr1[n][m];
    printf("enter the elements of the matrix\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            scanf("%d", &arr1[i][j]);
        }
    }
    printf("your matrix is \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    int arr2[m][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr2[j][i]=arr1[i][j];
        }
        printf("\n");
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}