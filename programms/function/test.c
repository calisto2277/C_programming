#include <stdio.h>

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}

double exponent(int base,int power)
{
    if(power==0)
    {
        return 1;
    }
    double result = 1;
    for(int i = 1; i<=power; i++){
        result = result*base;
    }
    return result;
}

int main(){
    int x;
    scanf("%d", &x);

    double sum = 0;
    for(int n = 1; n<=7; n++){
        double Num = (exponent(-1,n+1))*(exponent(x,n));
        double Den = n;
        double nth_term = Num/Den;
        sum += nth_term;
    }
    printf("%lf\n",sum);
    return 0;
}