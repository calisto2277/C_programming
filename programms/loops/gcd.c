#include <stdio.h>
int main()
{
    int i, a,b,c=1,m,gcd;
    printf("enter 2 numbers\n");
    scanf("%d , %d ", &a, &b);
    for (i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            
            c=c*i;
            i=m;
            printf("the gcd is %d",c);
            
        }
        else
        {
            i++;
        }
    }
    printf("%d is the gcd", gcd);
    return 0;
}