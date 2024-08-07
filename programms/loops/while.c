#include <stdio.h>
int main()
{
    int n;
    printf("enter number\n");
    scanf("%d", &n);
    while (n>0)
    {
        n=n-1;
        printf("%d\n", n);
    }
    return 0;
}