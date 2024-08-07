/*#include<stdio.h>
int main()
{
 int n,m;
 printf("enter the number of rows and coloumns\n");
 scanf("%d%d",&n,&m);
 for(int j=0;j<n;j++)
 {
 for(int i=0;i<m;i++)
 {
    printf("*");
 }
 printf("\n");
}
return 0;
}*/

#include<stdio.h>
int main()
{
    int n,m,row,col;
    printf("enter the number you want the pattern\n");
    scanf("%d",&n);
    m=n+1;
    row=m+n;
    col=row;
    for(int j=0;j<row;j++)
    {
    for(int i=0;i<col;i++)
    {
        printf("%d",n);
    }
    printf("\n");
    n=n-1;




}


