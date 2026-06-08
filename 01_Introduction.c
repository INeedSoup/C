#include <stdio.h>
// preprocessor directive to include the standard input/output library

#include <stdbool.h>
// preprocessor directive to include the standard boolean library, which defines the bool type and the true and false constants

int main()
// main function - entry point of the program

{   
    // This is single line comment, comments are ignored by the compiler and are used to explain the code or make it more readable
    /*
        This 
        is 
        a 
        multi-line 
        comment
    */

    int apple = 5;
    // variable declaration and initialization
    // variable is a resuable container for storing data, in this case, we declare an integer variable named 'apple' and initialize it with the value 5
    // variables must be declared before they are used, and they can be reassigned new values throughout the program
    // int is a data type that represents integer values, it typically occupies 4 bytes of memory and has a range [-2^31, 2^31-1] on a 32-bit system

    printf("I have %d apples and %d bananas.\n", apple = 7, 3+2);
    // printf is a standard library function used to print formatted output to the console
    // %d is a format specifier for integers
    // Format specifiers are special tokens that begin with % followed by a character that indicates the type of data to be printed and optional modifiers (width, precision, flags) that control the formatting of the output
    // \n is an escape sequence that represents a newline character, it moves the cursor to the next line after printing the output 

    float cgpa = 8.63;
    // variable declaration and initialization for a floating-point number
    // float is a data type that represents single-precision floating-point numbers, it typically occupies 4 bytes of memory and has a range [3.4e-38, 3.4e+38] with 7 decimal digits of precision

    printf("My CGPA is %f\n", cgpa);
    // %f is a format specifier for floating-point numbers

    double pi = 3.141592653589793;
    // variable declaration and initialization for a double-precision floating-point number
    // double is a data type that represents double-precision floating-point numbers, it typically occupies 8 bytes of memory and has a range [1.7e-308, 1.7e+308] with 15 decimal digits of precision
    
    printf("The value of pi is approximately %.15lf\n", pi);
    // %lf is a format specifier for double-precision floating-point numbers
    // .15 in the format specifier indicates that we want to display 15 digits after the decimal point, without it, the default is 6 digits after the decimal point

    char grade = 'O';
    // variable declaration and initialization for a character
    // char is a data type that represents a single character (symbols, letters, digits), it typically occupies 1 byte of memory and can store values in the range [-128, 127] or [0, 255] depending on whether it is signed or unsigned
    
    printf("My grade is %c\n", grade);
    // %c is a format specifier for characters

    char name[] = "Aman";
    // variable declaration and initialization for a string (array of characters)
    // '' are used to denote character literals, while "" are used for string literals, is c we do not have a built-in string type, instead we use arrays of characters to represent strings

    printf("My name is %s\n", name);
    // %s is a format specifier for strings, it expects a pointer to the first character of the string

    bool isOnline = true;
    // variable declaration and initialization for a boolean value, bool is a data type that represents boolean values (true or false), it typically occupies 1 byte of memory, and the true constant is usually represented by the value 1 or an nonzero value, while the false constant is represented by the value 0

    if(isOnline) 
    {
        printf("I am online.\n");
    } else 
    {
        printf("I am offline.\n");
    }
    // if-else statement to check the value of isOnline and print the corresponding message

    // width, precision and flag in printf
    printf("Pi with width 20 and precision 10: %+20.7lf\napple = %+d\n", pi, -4);
    printf("Pi with width 20 and precision 10: %-20.7lf\n", pi);
    // + flag in the first printf indicates that we want to display the sign of the number (positive or negative), - flag in the second printf indicates that we want to left-align the output within the specified width, without it, the default is right-alignment

    // Arithmetic operations in printf
    // +, -, *, /, % operators in printf, binary operators that perform arithmetic operations on two operands
    printf("The sum of 5 and 3 is %d\n", 5 + 3);
    printf("The difference of 5 and 3 is %d\n", 5 - 3);
    printf("The product of 5 and 3 is %d\n", 5 * 3);
    printf("The quotient of 5 and 3 is %f\n", 5.0 / 3.0); // we need to use floating-point literals (5.0 and 3.0) to get a floating-point result, otherwise, if we use integer literals (5 and 3), we would get an integer result (1) due to integer division
    printf("The remainder of 5 divided by 3 is %d\n", 5 % 3);
    // + operator is used for addition, - operator is used for subtraction, * operator is used for multiplication, / operator is used for division, % operator is used for modulus (remainder)

    // --, ++ operators in printf, unary operators that perform increment or decrement operations on a single operand
    int x = 5;
    printf("The value of x is %d\n", x++); // post-increment
    printf("The value of x is %d\n", ++x); // pre-increment
    // x++ is the post-increment operator, it returns the current value of x and then increments x by 1, while ++x is the pre-increment operator, it increments x by 1 and then returns the new value of x
    int y = 5;
    printf("The value of y is %d\n", y--); // post-decrement
    printf("The value of y is %d\n", --y); // pre-decrement
    // y-- is the post-decrement operator, it returns the current value of y and then decrements y by 1, while --y is the pre-decrement operator, it decrements y by 1 and then returns the new value of y

    // +=, -=, *=, /=, %= operators in printf, augmented assignment operators that perform an arithmetic operation on a variable and then assign the result back to the same variable
    int a = 5;
    printf("The value of a is %d\n", a += 3); // a = a + 3
    printf("The value of a is %d\n", a -= 2); // a = a - 2
    printf("The value of a is %d\n", a *= 4); // a = a * 4
    printf("The value of a is %d\n", a /= 2); // a = a / 2
    printf("The value of a is %d\n", a %= 3); // a = a % 3

    return 0;
    // return statement to indicate successful program termination, in c90 and later standards, the return statement can be omitted

}