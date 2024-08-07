#include <stdio.h>

int rfac(int);

int main()
{
    int k, result;
    printf("enter the number of which you want the factorial\n");
    scanf("%d", &k);
    result = rfac(k);
    printf("factorial of the entered number is %d",result);
    return 0;
}

int rfac(int k)
{
    if (k == 1 || k == 0)
    {
        return 1;
    }
    else
        
        {
            return k * rfac(k - 1);
        }
}