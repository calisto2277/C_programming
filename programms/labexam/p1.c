#include <stdio.h>

int main()
{
    int prime[20], nonprime[20], complete[26];
    int k = 0, l = 0;
    FILE *ptr;
    ptr = fopen("number.txt", "r");
    if (ptr == NULL)
    {
        printf("given file does not exist\n");
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {
            fscanf(ptr, "%d", &complete[i]);
        }
        for (int i = 0; i < 26; i++)
        {
            int count = 0;
            for (int j = 1; j < 20; j++)
            {
                if (complete[i] % j == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                prime[k] = complete[i];
                k++;
            }

            else
            {
                nonprime[l] = complete[i];
                l++;
            }
        }
        for (int i = 0; i < k; i++)
        {
            printf("%d\n", prime[i]);
        }
    }
    return 0;
}
