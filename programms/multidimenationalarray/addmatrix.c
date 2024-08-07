#include <stdio.h>
int main()
{
    int n, m, k, h;
    printf("enter the number of rows in 1st matrix\n");
    scanf("%d", &n);
    printf("enter the number of coloumns in 1st matrix\n");
    scanf("%d", &m);
    int arr1[n][m];
    printf("enter the number of rows in 2nd matrix\n");
    scanf("%d", &k);
    printf("enter the number of coloumns in 2nd matrix\n");
    scanf("%d", &h);
    int arr2[k][h];

    printf("enter the elements of the 1st matrix\n");
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
    printf("enter the elements of the 2nd matrix\n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < h; j++)
        {

            scanf("%d", &arr2[i][j]);
        }
    }
    printf("your matrix is \n");
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < h; j++)
        {

            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }
    int sum[n][m];
    if (n == k && m == h)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                sum[i][j] = arr1[i][j] + arr2[i][j];
            }
            printf("\n");
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d\t",sum[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("sum of matrices is not defined");
    }
    return 0;
}