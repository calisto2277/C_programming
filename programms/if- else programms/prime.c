#include<stdio.h>
int main()
{
int p,x,y;
printf("enter a number\n");
scanf("%f",&p);
x=p%2;
y=p%3;
if(x!=0 && y!=0)
{
    printf("number is prime!");
}
else{
    printf("number is not prime");
}
return 0;
}