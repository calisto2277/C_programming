#include <stdio.h>
int main()
{
    int n,m;
    printf("enter the number of rows in matrix\n");
    scanf("%d", &n);
    printf("enter the number of coloumns in matrix\n");
    scanf("%d", &m);
    int arr[n][m];
    printf("enter the elements of the matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            scanf("%d",&arr[i][j]);
        }
    }
    printf("your matrix is \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}