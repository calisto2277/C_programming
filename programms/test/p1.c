#include <stdio.h>
#include <stdlib.h>
int main()
{
    int year[33]={0};
    FILE *ptr;
    ptr = fopen("leap.txt", "r");
    if (ptr == NULL)
    {
        printf("following file does not exist ");
        exit(0);
    }
    else
    {
        for (int i = 0; i < 32; ++i)
        {
            fscanf(ptr, "%d", &year[i]);
        }
    }
    for (int j = 0; j < 32; j++)
    {
        if (year[j] % 4 == 0 && year[j] % 100 == !0)
        {
            printf("%d is a leap year\n", year[j]);
        }
        else if (year[j] % 4 == 0 && year[j] % 100 == 0 && year[j] % 400 != 0)
        {
            printf("%d is not a leap year\n", year[j]);
        }
        else if (year[j] % 4 == 0 && year[j] % 100 == 0 && year[j] % 400 == 0)
        {
            printf("%d is a leap year\n", year[j]);
        }
        else if (year[j] % 4 != 0 && year[j] % 100 != 0 && year[j] % 400 != 0)
        {
            printf("%d is not a leap year\n", year[j]);
        }
    }
    return 0;
}