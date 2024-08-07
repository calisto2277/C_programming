#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (j = 5; j <= i; j--)
        {
            for (k = 1; k <= 5; k++)
            {
                printf("#");
            }
            printf(" ");
        }
        printf("\n");
    }
}