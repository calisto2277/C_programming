#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("%d ",j+1);//for number pattern//
                               //for * use printf("*")//
                               //for alphabets use printf("%c ", a+j)
        }
        printf("\n");
    }
}