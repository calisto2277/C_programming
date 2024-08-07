// fgets((file name where you want to store, length of the file, pointer))  : line by line
// fgetc()  : char by char
// fscanf(pointer,format specifier,name of the file where you want to store the data) : word by word



#include <stdio.h>
#include <stdlib.h>

void printarray(int arr[], int size){
    for(int j=0;j<size;j++){
        printf("%d\n",arr[j]);
    }
}

void ArrayOperation(int* arr, int size){
    // code here
}

int main(){
    char filename[100];
    printf("Enter the filename: ");
    scanf("%s", filename);

    FILE* file;
    file = fopen(filename, "r");

    char line[100];
    int arr[9];
    int i = 0;

    while(fgets(line, sizeof(line), file) != NULL){
        arr[i] = atoi(line); i++;
    } // array is filled

    // make and call your required function
    printarray(arr, 9);
    return 0;
}