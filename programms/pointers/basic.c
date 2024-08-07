#include <stdio.h>

void update(int *x,int *y) { //using dereferencing pointers to calculate the sum.
    int m=*x;
    *x=*x+*y;              //here we change the value of the variable using pointers.
    *y=m-*y;                
    }

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", *pa,*pb);     //printf("%d\n%d", a,b); this will also print a fine result.

    return 0;
}
