#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// functions in C are reusable blocks of code that perform a specific task, they can take parameters and return values, they help in breaking down complex problems into smaller, manageable pieces, and promote code reusability and modularity
// function definition consists of the function header and the function body, the function header includes the return type, function name, and parameters (if any)
// function return type specifies the type of value the function will return, if a function does not return any value, it is declared with the return type 'void'
// return statement is used to exit a function and optionally return a value, the value returned by a function can be used in expressions or assigned to variables
// return 0 is commonly used in the main function to indicate that the program executed successfully, it is a convention in C programming to return 0 from the main function to signal that the program has completed without errors

void greet(char name[], int age) // function definition with parameters name and age
{
    printf("Hello, %s, you are %d years old\n", name, age);
}

double square(double num)
{
    return num * num;
}

bool ageCheck(int num)
{
    return num >= 18;
}

char secondChar(char str[])
{
    if (strlen(str) < 2)
    {
        return '\0';
    }
    return str[1];
}

int main()
{
    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    greet(name, age); // Calling the greet function with parameters name and age, parameters have to be in the same order as defined in the function
    greet("Dhurandhar", 22); // Calling the greet function with string literal and integer literal as arguments, string literals are automatically converted to char arrays

    double num = 0;
    printf("Enter a number to find its square: ");
    scanf("%lf", &num);
    printf("The square of %.2lf is %.2lf\n", num, square(num));
    
    printf("Enter your age to check if you are an adult: ");
    scanf("%d", &age);
    
    if (ageCheck(age))
    {
        printf("You are an adult.\n");
    }
    else
    {
        printf("You are not an adult.\n");
    }

    char text[30] = "";
    getchar();
    printf("Enter a string to find its second character: ");
    fgets(text, sizeof(text), stdin);
    text[strlen(text) - 1] = '\0';

    printf("The second character of the string is: '%c'\n", secondChar(text));

    return 0;
}
