#include <stdio.h>
int main()
{
    int n,greatest;
    printf("enter the size of array\n");
    scanf("%d", &n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the element of the array\n");
        scanf("%d", &marks[i]);
    } 
     greatest=marks[0];
    for (int j = 0; j < n; j++)
    {
        if (greatest < marks[j])
        {
            greatest = marks[j];
        }
    }
    printf("greatest element of the array is %d", greatest);
    return 0;
}
