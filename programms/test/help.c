#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr;
    ptr=fopen("data1.txt","r");
    char line[100];

    if(ptr==NULL)
    {
     printf("the file does not exist\n");
     exit(0);
    }
    else
    {
     for(int i=0;i<3;i++)
     {
        fscanf(ptr,"%s", line);
        printf("%s ", line);
     }
    }
      return 0;
}
