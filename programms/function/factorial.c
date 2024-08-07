#include <stdio.h>

int fac(int);

int main()
{
    int x, m, result;
    printf("enter the number for which you want the factorial\n");
    scanf("%d", &x);
    for (m = 1; m <= 10; m++)
    {

        result = fac(m);
        printf("%d is the factorial\n", result);
    }
    return 0;
}
int fac(int x)
{
    int i, factorial = 1;
    for (i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}