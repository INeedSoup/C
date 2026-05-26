#include <stdio.h>
#include <stdbool.h>
// ternary operator ? = shorthand for if-elses statements
// ternary operator: condition ? value_if_true : value_if_false

int main()
{
    int a = 10;
    int b = 20;

    (a > b) ? printf("a is greater than b\n") : printf("b is greater than a\n");


    bool isOnline = true;
    printf("You are %s\n", isOnline ? "online" : "offline");

    int number = 8;
    printf("%d is %s\n", number, (number % 2 == 0) ? "even" : "odd");
    
    int age = 22;
    printf("You are %s\n", (age >= 18) ? "an adult" : "a minor");

    int hours = 13;
    int minutes = 30;

    char *meridiem = (hours >= 12) ? "PM" : "AM";

    printf("The time is %02d:%02d %s\n", (hours > 12) ? hours - 12 : hours, minutes, meridiem);
    // here %s will display chars until it reaches '\0' null terminator

    printf("The time is %02d:%02d %s\n", hours, minutes, (hours > 12) ? "PM" : "AM");

    return 0;
}