#include <stdio.h>

int sum(int); // function decleration

int main()
{
    int x, result;
    printf("enter the number upto which you want the sum\n");
    scanf("%d", &x);
    result = sum(x);
    printf("the summation of 1st %d numbers is %d", x, result);
    return 0;
}
int sum(int x) // function definition
{
    if (x > 0)
    {
        return x + sum(x - 1);
    }
    else
    {
        return 0 ;
    }
}