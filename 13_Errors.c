#include <stdio.h>

// Errors is an illegal operation performed by the user which results in abnormal working of the program.
// Types of Errors:
// 1. Syntax Errors: These are errors that occur when the code violates the syntax rules of the programming language.
// missing semicolons, unmatched parentheses, or misspelled keywords, using undeclared variables, or trying to assign a value to a constant variable. These errors are usually caught by the compiler and must be fixed before the program can be executed.

// 2. Runtime Errors: These are errors that occur during the execution of the program.
// Examples of runtime errors include division by zero, accessing an array out of bounds, or trying to open a file that does not exist. These errors can cause the program to crash or produce unexpected results, and they can be difficult to debug because they may not occur consistently.

// 3. Linker Errors: These are errors that occur when the linker is unable to find the definition of a function or variable that is declared in the code. This can happen if you forget to include a necessary library or if there is a typo in the function name.
//  For example, if you declare a function but forget to define it, you will get a linker error when you try to compile the program. Linker errors can also occur if you have multiple definitions of the same function or variable in different files, which can lead to conflicts during the linking process.

// 4. logical Errors: These are errors that occur when the program compiles and runs without crashing, but produces incorrect results. This can be caused by a mistake in the logic of the code, such as using the wrong operator or forgetting to update a variable.
// For example, if you are trying to calculate the average of a set of numbers but forget to divide by the total count, you will get an incorrect result. Logical errors can be difficult to identify because they do not produce any error messages, and they may require careful debugging and testing to find and fix.

// 5. Semantic Errors: These are errors that occur when the code is syntactically correct but does not make sense in the context of the program. For example, trying to assign a string value to an integer variable or using a variable before it has been initialized.
// Semantic errors can be difficult to detect because they do not produce any error messages, and they may require careful analysis of the code to identify and fix.

int main()
{
    // Example of Syntax Error:
    // printf("Hello World")  // Missing semicolon - this would cause a compilation error
    printf("Hello World\n");

    // Example of Runtime Error:
    // int x = 5;
    // int y = 0;
    // int result = x / y;  // Division by zero - this would cause runtime error
    int x = 5;
    int y = 2;
    int result = x / y;
    printf("Result: %d\n", result);

    // Example of Linker Error:
    // extern void undefined_function();  // If this function is not defined anywhere
    // undefined_function();  // This would cause linker error

    // Example of Logical Error:
    // int average = (10 + 20 + 30) / 2;  // Should divide by 3, not 2
    int average = (10 + 20 + 30) / 3;
    printf("Average: %d\n", average);

    // Example of Semantic Error:
    // int number = "123";  // Cannot assign string to int
    int number = 123;
    printf("Number: %d\n", number);

    return 0;
}