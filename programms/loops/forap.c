#include <stdio.h>
int main()
{
    int  j, sum = 0,a;
    printf("enter a number\n");
    scanf("%d",&a);
 
    for (j = 1; j <= a; j++)
    {
        sum = sum + j;
          
    }
    printf("The Sum is : %d\n", sum);
}
