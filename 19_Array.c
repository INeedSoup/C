#include <stdio.h>
#include <string.h>

void userInput();

int main()
{
    // array : A fixed-size collection of elements of the same data type (Similar to a variable, but it holds more than 1 value)
    // It allocates contious memory block, its name stores address of first element
     
    int numbers[] = {10, 20, 30, 40, 50};

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    char name[] = "Bro Panda";

    printf("%d ", *numbers); // * values at address operator *(address), returns values at the address

    printf("%d ", numbers[0]);

    printf("%c ", grades[4]);

    printf("%c ", name[2]); // 3rd character in the string

    printf("%s \n", name);


    for(int i = 0; i < 5; i++)
    {
        numbers[i] += i;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // If the size dynamically changes we can use sizeof() function for getting length 

    for(size_t i = 0; i < sizeof(grades); i++)
    {
        printf("%c ", grades[i]);
    }

    printf("\n");

    for(size_t i = 0; i < sizeof(name); i++)
    {
        printf("%c", name[i]);
    }

    printf("\n");

    printf("%zu ", sizeof(numbers));
    printf("%zu ", sizeof(numbers[0]));
    // size of element of int array is 4, size of numbers is total bytes it takes, which would be 4 * number of elements;
    // length of array = size of array / size of a element of array

    size_t size = sizeof(numbers)/sizeof(numbers[0]);

    printf("\n");

    for(size_t i = 0; i < size; i++)
    {
        printf("%d ", numbers[i]);
    }

    // string, char array, we can directly use sizeof function as size of char is 1 
    printf("\n");
    printf("%zu ", sizeof(grades));
    printf("%zu ", sizeof(grades[0]));
    
    printf("\n");
    printf("%zu ", sizeof(name));
    printf("%zu ", sizeof(name[0]));
    printf("\n");

    userInput();

    return 0;
}

// Grabage values basically comes from programs that used that memory previously, c doesnt automatically clear memory

void userInput()
{
    int scores[5] = {0}; // assigning all element zero

    for(int i = 0; i < 5; i++) 
    {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", scores[i]);
    }
}
