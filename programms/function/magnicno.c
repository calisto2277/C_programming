#include <stdio.h>

int magic(int);
int main()
{
    int N;
    printf("enter the number\n");
    scanf("%d", &N);
    
    return 0;
}

int magic(int x)
{

    int rem;
    int count = 0;
    int sum = 0;

    while (x> 0)
    {
        rem = x % 10;
        x = x/ 10;

        sum = sum + rem;
        count++;
    }
    if (sum / 10 == 0)
    {
        printf("magic number is %d\n", sum);
    }
    else
    {
        return magic(sum);
    }
}