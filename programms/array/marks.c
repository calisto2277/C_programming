#include <stdio.h>
int main()
{
    int i, j;
    int marks[10];
    for (i = 0; i <= 10; i++)
    {
        printf("enter the marks of student\n");
        scanf("%d", &marks[i]);
    }
    for (j = 0; j <= 10; j++)
    {
        if (marks[j] > 35)
        {
            printf("address of the element is %d\n", j);
            printf("marks are %d\n", marks[j]);
        }
    }
    return 0;
}
