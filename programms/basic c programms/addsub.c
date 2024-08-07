#include <stdio.h>
int main()
{
    int a, b, sum, diff;
    float c, d, su, dif;
    printf("enter 1st and 2nd no.\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    diff = a - b;
    printf("%d %d\n",sum, diff);
    printf("enter 3rd and 4th no.\n");
    scanf("%f %f",&c, &d);
    su = c + d;
    dif = c - d;
    printf("%f   %f",su, dif);
    return 0;
}