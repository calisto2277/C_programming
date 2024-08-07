#include <stdio.h>
int main()
{
    int n,i,f1=0,f2=1,fabterm;
    printf("Enter the number upto which you want the series\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        fabterm=f1+f2;
        printf("%d  ", fabterm);
        f1=f2;
        f2=fabterm;
    }
    return 0;
}