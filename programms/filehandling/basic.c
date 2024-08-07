//program to create a file open it write in it and close it.

#include<stdio.h>
#include<stdlib.h>
int main()
{
     int year;
     char str1,str2,str3;
     FILE *ptr;
     ptr=fopen("utopia.txt","a");
     char del[20]="how are you ";
     if(ptr==NULL)
    {
     printf("enter file does not exist\n");
     exit(0);
    }
    else
    {
        fputs(del,ptr);
        fputs("\n",ptr);
    }
    fclose(ptr);
     return 0;
}