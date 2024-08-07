/*#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *pointer;
    pointer = fopen("world.txt", "r");
    char del[50];
    if (pointer = NULL)
    {
        printf("file does not exist\n");
        exit(0);
    }
    else
    {
        while(fgets(del,50,pointer)!=NULL);
        printf("%s", del);
    }

    return 0;
}*/
#include <stdio.h>
#include <string.h>
  
int main()
{
  
    // Declare the file pointer
    FILE* filePointer;
  
    // Declare the variable for the data to be read from
    // file
    char dataToBeRead[50];
  
    // Open the existing file GfgTest.c using fopen()
    // in read mode using "r" attribute
    filePointer = fopen("GfgTest.txt", "r");
  
    // Check if this filePointer is null
    // which maybe if the file does not exist
    if (filePointer == NULL) {
        printf("GfgTest.txt file failed to open.");
    }
    else {
  
        printf("The file is now opened.\n");
  
        // Read the dataToBeRead from the file
        // using fgets() method
        fgets(dataToBeRead, 50, filePointer);
               
  
            // Print the dataToBeRead
            printf("%s", dataToBeRead);
        }
  
        // Closing the file using fclose()
        fclose(filePointer);
  
        printf(
            "Data successfully read from file GfgTest.txt\n");
        printf("The file is now closed.");
    
    return 0;
}