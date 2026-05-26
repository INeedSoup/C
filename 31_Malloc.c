#include <stdio.h>
#include <stdlib.h> // for malloc

int main()
{
    // malloc() = A function in C that dynamically allocates a specified number of bytes in memory

    // char grades[5] = {0};

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    char *grades = malloc(number * sizeof(char));
    // malloc returns a void pointer, and using malloc allocates memory in heap

    if(grades == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    // we have to check that we are not freeing NULL pointers as that leads to segmentation errors
    // segmentation fault occurs when a programm attempts to access a memory location that is not allowed to access, or attempts to access a memory location in a way that is not allowed 

    for(int i = 0; i < number; i++)
    {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]);
    }

    for(int i = 0; i < number; i++)
    {
        printf("%c ", grades[i]);
    }


    free(grades); // we have to free the pointer variable for learing the dataspaces, it leaves us with a dangling pointer
    grades = NULL; // avoids dangling pointer

    return 0;
}