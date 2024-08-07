#include <stdio.h>
void mypower(int base, int power) // function decleration
{
    int answer = 1, i; // function definition
    for (i = 1; i <= power; i++)
    {
        answer = base * answer;
    }
    printf("%d\n", answer);
}

int main()
{
    int e, x;
    printf("enter the base of the number\n");
    scanf("%d", &e);
    printf("enter the power of the number\n");
    scanf("%d", &x);
    mypower(e, x);
    return 0;
}



/* i have used void function if i would have used int function then;

int mypower(int base, int power) 
{ 
int answer = 1, i;
    for (i = 1; i <= power; i++)
    {
        answer = base * answer;
    }
    return answer;
    }
    
    int main()
{
    int e, x,result;
    printf("enter the base of the number\n");
    scanf("%d", &e);
    printf("enter the power of the number\n");
    scanf("%d", &x);
    result = mypower(e, x);
    printf("%d", result);
    return 0;
}                                                    */