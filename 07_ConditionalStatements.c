#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 65)
    {
        printf("You are a senior citizen.\n");
    }
    else if (age >= 18)
    {
        printf("You are an adult.\n");    
    }
    else if (age >= 13)
    {
        printf("Your are a teenager.\n");
    }
    else
    {
        printf("You are a child.\n");
    }
    // You can have as many else if statements as you need to cover different age ranges. The conditions are evaluated in order, and the first one that is true will execute its block of code.


    // Ternary Operator
    printf("You are %s.\n", (age >= 18) ? "an adult" : "not an adult");
    // Here the condition (age >= 18) is evaluated. If it is true, "an adult" is printed; otherwise, "not an adult" is printed.

    char name[50] = "";
    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); 
    name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0)
    {
        printf("You did not enter your name\n");
    }
    else
    {
        printf("Hello, %s\n", name);
    }


    // Switch Statement
    // Alternative to multiple if-else statements when you have a variable that can take on a limited set of values. Useful for menu driven programs
    
    int dayOfWeek = 0;

    printf("Enter a number (1-7) for the day of the week: ");
    scanf("%d", &dayOfWeek);

    switch(dayOfWeek)
    {
        case 1:
            printf("Monday\n");
            break;
        
        case 2:
            printf("Tuesday\n");
            break;
        
        case 3:
            printf("Wednesday\n");
            break;
        
        case 4: 
            printf("Thursday\n");
            break;

        case 5:
            printf("Friday\n");
            break;
        
        case 6:
            printf("Saturday\n");
            break;

        case 7:
            printf("Sunday\n");
            break;

        default:
            printf("Invalid input\n");
    }
    // The switch statement evaluates the expression (dayOfWeek) and compares it against the values specified in each case. If a match is found, the corresponding block of code is executed until a break statement is encountered, which exits the switch. If no match is found, the default case is executed.
    // There is break statement at the end of each case to prevent "fall through", which means that if a case matches, the code will continue to execute the next cases until it hits a break. If you omit the break statement, it will execute all subsequent cases regardless of their values.

    
    // Nested if statements
    float ticketPrice = 10.0;
    bool isStudent = false;
    bool isSenior = false;

    printf("Enter your age: ");
    scanf("%d", &age);
    isSenior = (age >= 65) ? 1 : 0;

    printf("Are you a student? (1 for yes, 0 for no): ");
    int studentInput = 0;
    scanf("%d", &studentInput);
    isStudent = studentInput != 0;

    if(isStudent)
    {
        if(isSenior)
        {
            printf("You get a senior citizen discount and a student discount of 30%%\n"); // The %% is used to print a literal % character in the output.
            ticketPrice *= 0.7;
        }
        else
        {
            printf("You get a student discount of 10%%\n");
            ticketPrice *= 0.9;
        }
    }
    else
    {
        if(isSenior)
        {
            printf("You get a senior citizen discount of 20%%\n");
            ticketPrice *= 0.8;
        }
         else
        {
            printf("You do not get any discounts\n");
        }
    }

    printf("Your final ticket price is: %.2f\n", ticketPrice);

    return 0;
}
