    #include <stdio.h>
    #include <stdbool.h>

    // Function prototype provides compiler the information about a function's name, return type, and parameters before its actual defination, enables type checking and allows functions to be used before they're defined
    // Improves readability, organization, and helps prevent errors.

    void hello(char name[], int age);

    bool ageCheck(int age);

    int main()
    {
        hello("Aman", 22);
        if(ageCheck(22))
        {
            printf("You are old enough\n");
        }
        else
        {
            printf("Underage\n");
        }
        return 0;
    }

    void hello(char name[], int age)
    {
        printf("Hello %s\n", name);
        printf("You are %d years old\n", age);
    }

    bool ageCheck(int age)
    {
        return age >= 18;
    }


