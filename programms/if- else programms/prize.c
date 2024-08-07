#include<stdio.h>
int main()
{
float m,s,ms;
printf("enter your marks in maths\n");
scanf("%f",&m);
printf("enter your marks in science\n");
scanf("%f", &s);
ms=m+s;
if(m>=15)
{
    printf("Congrats you have been awarded a prize in maths");
}
else if(s>=15)
{
printf("Congrats you have been awarded a prize in science");
}
else if(ms>45)
{
printf("Congrats you have been awarded a class prize");
}
else{
    printf("no award given");
}
return 0;
}