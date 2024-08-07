#include<stdio.h>
#include<stdlib.h>
int main()
{
     int arr[9];
    FILE *ptr;
    ptr=fopen("number.txt","r");
    if(ptr==NULL)
    {
     printf("the file does not exist");
     exit(0);
    }
    else
    {
     for(int i=0;i<9;i++)
     {
     fscanf(ptr,"%d",&arr[i]);
     }
    }
     int max=arr[0];
     for(int j=0;j<10;j++)
     {
          if(arr[j]<arr[j+1])
          {
          max=arr[j+1];
          }

     }
      printf("%d\n",max);
      return 0;
}
