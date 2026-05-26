#include <stdio.h>

// Variable Scope refers to the region of the program where a variable is defined and can be accessed.
// Types of scopes in C:
// 1. Global Scope: Variables declared outside all functions, accessible throughout the program
// 2. Function Scope: Variables declared inside a function, accessible only within that function
// 3. Block Scope: Variables declared inside blocks ({}), accessible only within that block
// 4. Static variables: Retain their value between function calls, can be only initialized once

// Global variable - accessible everywhere
int global_var = 100;
// to used with care as any function can modify its value, so its pro can act as con if not properply used 

void example_function() 
{
    // Function scope variable
    int func_var = 50;
    printf("Inside function: global_var = %d, func_var = %d\n", global_var, func_var);

    // Can access global variable
    global_var = 200;

    // Static variable example
    static int static_counter = 0; // Initialized only once
    static_counter++;
    printf("Static counter: %d\n", static_counter); // Even after multiple call to function the variable will not be initialized to 0 again

    // Block scope example
    {
        int block_var = 25;
        printf("Inside block: block_var = %d\n", block_var);
        // Can access outer scope variables
        func_var = 75;
    }
    // block_var is out of scope here - this would cause an error:
    // printf("Outside block: block_var = %d\n", block_var); // ERROR: block_var not accessible
}

int main()
{
    printf("In main: global_var = %d\n", global_var);

    // Local variable in main
    int local_var = 10;
    printf("In main: local_var = %d\n", local_var);

    // Call function
    example_function();
    printf("Back in main: global_var = %d\n", global_var);

    // func_var is not accessible here - this would cause an error:
    // printf("In main: func_var = %d\n", func_var); // ERROR: func_var not in scope

    // Shadowing example - same variable name in different scopes
    int shadow_var = 5;
    printf("Outer shadow_var = %d\n", shadow_var);

    {
        int shadow_var = 15; // This shadows the outer variable
        printf("Inner shadow_var = %d\n", shadow_var);
    }

    printf("Back to outer shadow_var = %d\n", shadow_var);

    example_function();

    return 0;
}