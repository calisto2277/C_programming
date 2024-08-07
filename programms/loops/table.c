#include<stdio.h>
int main()
{
    int i,a,no;
    printf("enter a number\n");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        no=a*i;
        printf("%d\n",no);
    }
    return 0;
}