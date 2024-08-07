/*int main()
{
    int i;
    int num[5]={1,34,56,78};
    for(i=0;i<=2;i++)
    {
        printf("all elements of the array are %d\n",num[i]);
    }
    return 0;
}
#include <stdio.h>

int main() {
  char week[]={'W','e','d','n','e','s','d','a','y'};
  int i=0;
  while(week[i])
  {
      printf("%c",week[i]);
      i++;
  }
  return 0;
}*/
#include <stdio.h>

int main() {
  char weeek[8]={'T','h','u','r','s','d','a','y'};
  char week[9]={'W','e','d','n','e','s','d','a','y'};
  int i=0;
  int j=0;
  /*while(weeek[j])
  {
      printf("%c",weeek[j]);
      j++;
  }
  printf("\n");*/
  while(i<9)
  {
      printf("%c",week[i]);
      i++;
  }
  return 0;
}