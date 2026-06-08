#include <stdio.h>
#include <string.h> // Include string.h for strlen function

int main() 
{
    int age; // Uninitialized variable, may contain garbage value
    float cgpa = 0.0f; // f is used to indicate a float literal
    char grade = '\0'; // \0 is the null character, indicating an uninitialized char variable
    char name[30] = ""; // Empty string, indicating an uninitialized char array  
    
    printf("%d this is a garbage value\n", age);
    printf("%f float value\n", cgpa);
    printf("%c char value\n", grade);
    printf("%s string value\n", name);

    printf("Enter your age: "); // Prompt the user for input
    scanf("%d", &age); // & is used to get the address of the variable age, allowing scanf to store the input value in it
    printf("Your age is: %d\n", age);

    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);
    printf("Your cgpa is: %.2f\n", cgpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // Space before %c to consume any leftover whitespace
    printf("Your grade is: %c\n", grade);   

    printf("Enter your first name: ");
    scanf("%s", name); // No & needed for arrays, as the array name itself is a pointer to the first element
    printf("Your name is: %s\n", name);
    // scanf can not read strings with spaces, it will stop reading at the first whitespace character

    getchar(); // Consume the leftover newline character from the previous input, as we can not add space like scanf(" %c", &grade); for strings 
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    // Here we use fgets, syntax is: fgets(char *str, int n, FILE *stream);
    // where str is the array to store the input, n is the maximum number of characters to read (including the null terminator), and stream is the input stream (stdin for standard input).
    // As for int n we can write 30 or sizeof(name) which will give the same result, but using sizeof(name) is more maintainable as it automatically adjusts if the size of the name array changes in the future.
    // stdin is used to read input from the standard input stream, which is typically the keyboard.
    name[strlen(name) - 1] = '\0';
    // The above line is used to remove the newline character that fgets adds at the end of the input string. if the user inputs a string that is shorter than the maximum length specified, fgets will append a newline character at the end of the string. By setting the last character to '\0'
    printf("Your full name is: %s\n", name);
    
    printf("End\n");

    return 0;
}