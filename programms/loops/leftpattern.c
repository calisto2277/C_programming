#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 5; i >=1; i--)
    {
        for (j = 5; j <=i; j--)
        {
            printf("  ");
        }
        for(k=5-(i-1);k>=1;k--)
        {
            printf("@ ");
        }
        printf("\n");
    }
}