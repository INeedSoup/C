#include <stdio.h>

int main()
{
    // Read a file

    FILE *pFile = fopen("output.txt", "r");

    char buffer[1024] = {0}; // used to temporarily store data, size is given in bytes, 1 KB is good size and initliaze it by 0 just so we dont get any garbage values

    if(pFile == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), pFile) != NULL)
    {
        printf("%s", buffer);
    }

    fclose(pFile); 

    return 0;
}