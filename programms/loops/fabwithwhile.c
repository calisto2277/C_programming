#include<stdio.h>
int main()
{
    int n,i=1,f1=0,f2=1,fabterm;
    printf("enter the number\n");
    scanf("%d",&n);
    while(i<=n)
    {
        fabterm=f1+f2;
        printf("%d ",fabterm);
        f1=f2;
        f2=fabterm;
        i++;
    }
    return 0;
}