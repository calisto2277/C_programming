#include<stdio.h>
int fac(int x);
int pow(int e,int x);
int mod(int x);
int main()
{
    float y;
    float arr[6];
    for(int x=-3;x<=3;x++)
    {
    y=2*pow(x,2)-((4*pow(x,3))/(fac(mod(x-1))))+2;
    printf("%f\n",y);
    arr[x+3]=y;
    }
    printf("\n-----------------------------------------\n");
    for(int i=0;i<6;i++)
    {
        if(2<=arr[i] && arr[i]<=4)
        {
            printf("%f\n",arr[i]);
        }
    }
    return 0;
}
int fac(int x)
{
    int result=1;
    for(int i=1;i<=x;i++)
    {
        result=result*i;
    }
    return result;
}
int pow(int e, int x)
{
    int result=1;
    for(int i=0;i<=x;i++)
    {
        result=result*e;
    }
    return result;
}
int mod(int x)
{
    if(x<0)
    {
        x=x*(-1);
    }
}

