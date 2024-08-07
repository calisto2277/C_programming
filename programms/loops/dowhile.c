#include <stdio.h>
int main()
{
    int a, table, pro = 0;
    printf("enter the number\n");
    scanf("%d", &a);
    do
    {
        pro++;
        table = pro * a;
        printf("table is %d\n", table);
    } while (pro <= 10);
    return 0;
}
