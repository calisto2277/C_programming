#include <stdio.h>

int main(){
    // code here
    char line1[4] = {'A', 'l', 'e', 'x'}; // character array but not string.
    char lineE[5] = {"Alex"}; // will print fine.
    char line2[5] = {'A', 'l', 'e', 'x', '\0'}; // is a string.
    char line3[6] = {'A', 'l', 'e', 'x'}; // string.
    char line4[10000] = {'A', 'l', 'e', 'x'}; //string.
    char arr[10];
    /*printf("%s\n", line1);
    printf("%s\n", lineE);
    printf("%s\n", line2);
    printf("%s\n", line3);
    printf("%s\n", line4);
    return 0;
    printf("%c",lineE[5]);
    return 0;
}*/
//is every character array a string or not? : So every character array that ends with a null character is a string.
// if we plug in double inverted commas in a char array it will automatically generate a null character thereby making it a string.EX lineE[5].

//how to take input ?
printf("enter the string\n");
for(int i=0;i<1;i++){
    scanf("%s",&arr[i]);
}
//scanf("%s", arr); better method to take input.
for(int i = 0; i<7; i++){
    printf("%c", arr[i]);
}
return 0;
}