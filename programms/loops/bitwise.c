#include<stdio.h>

void bit(int n , int k);
int main()
{
   int n, k;
   scanf("%d", &n);
   scanf("%d",&k);
   bit(n,k);
   return 0;
}

void bit(int n,int k)
{
    int m=(n*(n-1))/2;
    int a[m];int b[m]; int c[m];
    int l=0;
    while(l<m)
    {
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            a[l]=i&j;
            b[l]=i|j;
            c[l]=i^j;
            l++;
            
        }
    }
    }
    /*for(int t=0;t<m;t++)
    {
        printf("%d\n",c[t]);
    }*/
    int max=a[1];
    for(int y=0;y<m;y++)
    {
        if(a[y]>max)
        {
            max=a[y];
        }
    }
    int maX=b[1];
    for(int y=0;y<m;y++)
    {
        if(b[y]>maX)
        {
            maX=b[y];
        }
    }
    int Max=c[1];
    for(int y=0;y<m;y++)
    {
        if(c[y]>Max)
        {
            Max=c[y];
        }
    }
    //printf("%d %d %d",max,maX,Max);
    
    
    //for a matrix AND operator
      if(max<k)
      {
        printf("%d\n",max);
      }
      else if(max>=k)
      {
        printf("%d\n",k-1);
      }
      else{
        int z=0;
        while(max==k && a[z]==max && z<m)
         {
            z++;
         
        printf("%d\n",0);
         }
      }
        
    //for b array OR operator

     if(maX<k){
    printf("%d\n",maX);
     }
     else if(maX>=k)
     {
        printf("%d\n",k-1);
     }
     else{
        int z=0;
        while(maX==k && b[z]==maX && z<m)
         {
            z++;
         
        printf("%d\n",0);
         }
     }

     //for c array XOR operator

     if(Max<k){
    printf("%d\n",Max);
     }
     else if(Max>=k)
     {
        printf("%d\n",k-1);
     }
     else{
        int z=0;
        while(Max==k && c[z]==Max && z<m)
         {
            z++;
         
        printf("%d\n",0);
         }
        
     }

}