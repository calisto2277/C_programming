#include<stdio.h>

int sum(int n,int a,int b,int c);

int main()
{
  int n,a,b,c,ans;
  scanf("%d %d %d %d",&n,&a,&b,&c);
   ans=sum(n,a,b,c);
   printf("%d",ans);
   
   return 0;
}

int sum(int n,int a,int b,int c)
{
   if(n==1)
   {
    return a;
   }
   else if(n==2)
   {
    return b;
   }
   else if(n==3)
   {
    return c;
   }
   else
   {
     return sum(n-1,a,b,c)+sum(n-2,a,b,c)+sum(n-3,a,b,c);
   }
}