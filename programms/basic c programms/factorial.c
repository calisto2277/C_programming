#include<stdio.h>
int main()
{
    int i,a,fac=1;
    printf("enter a numnber\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fac=fac*i;
    }
printf("factorial is %d\n",fac );
}