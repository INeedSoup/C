#include <stdio.h>

int main()
{
    FILE *pFile = fopen("output.txt", "w"); // we give path of the file can be given in relative and absolute method, and the mode in which we wnat to open the file w write, r read, x execute

    // if we are unable to create or open a file with Fopen function this function returns a NULL (NULL is a pointer nothing, address 0)

    char text[] =  "Lets go warriors \nLets go warriors";

    if(pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully");

    fclose(pFile); // closing a file after working on it is important as other programs wont be able to work on the file, if we dont close it, even after program has stopped running as pointer will actively point to file and it will show file is in use

    return 0;
}