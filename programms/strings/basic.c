#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    fgets(sen,sizeof(sen),stdin);
    //printf("%c\n",ch);
    //printf("%s\n",s);
    puts(sen);
    //printf("%s\n",sen);
    return 0;
}

/*#include <stdio.h>

int max_elem_in_list(int arr[], int n){
    /*int arr[4];
    for(int i=0;i<4;i++)
    {
        scanf("%d",&arr[i]);
    }
    int Max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(Max<arr[i]){
            Max=arr[i];
        }
    }
    return Max;
}



int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int ans = max_elem_in_list(arr, n);
    //scanf("%d %d %d %d", &a, &b, &c, &d);
    //int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

   int Max=arr[0];
    for(int i=0;i<4;i++)
    {
        if(Max<arr[i]){
            Max=arr[i];
        }
        /*else{
            Max=arr[i];
        }*/
    