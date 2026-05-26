#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

void sleepMilliseconds(int milliseconds)
{
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000);
#endif
}

void nestedLoop()
{
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 10; j++)
        {
            printf("%3d    ", i * j);
        }
        printf("\n");
    }
}

void rectangle()
{
    int rows = 0;
    int columns = 0;
    char symbol = '\0';
    printf("Enter the # number of row: ");
    scanf("%d", &rows);

    printf("Enter the # number of columns: ");
    scanf("%d", &columns);

    printf("Enter a symbol to use: ");
    scanf(" %c", &symbol);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%c", symbol);        
        }
        printf("\n");
    } 
    
}


int main()
{
    // while loop, continue some code while the condition remain true, condition must be true for us to enter the while loop
    int i = 0;

    nestedLoop();

    rectangle();

    while(i < 5)
    {
        printf("Hello %d\n", i);
        i++;
    }
    // with normal while loop we check the condition first then perform statemennts if condition meets 

    do
    {
        printf("Hello %d\n", i);
        i++;    
    }
    while( i < 10); 
    // this here is another version of while loop, do while, where statements are peroformed once, then condition is checked 

    // while (1) is a infinite loop

    char name[40];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name) == 0)
    {
        printf("Name can not be happy\n");
        fgets(name, sizeof(name), stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("Youre name is %s\n", name);

    bool isRunning = true;
    char response = '\0';

    while(isRunning)
    {
        printf("You are playing a game\n");
        printf("Would you like to contniue? (Y = yes, N = no)\n");
        scanf(" %c", &response);
        
        if(response != 'Y' && response != 'y')
        {
            isRunning = false;
        }
    }

    printf("You exit the game\n");

    // for loop, used for repeating a code limited # of times
    // for(initialization; condition; Update)

    for(int i = 0; i < 10; i++) // we can change i++ to, any other operation as per need, i--, i+=2
    {
        sleepMilliseconds(10);
        printf("%d\n", i);
    } 

    // break, used to break out of the loop, exit the loop completely
    while(1)
    {
        int number = 0;
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number == 0) 
        {
            break;
        }

        else if (number == 1)
        {
            continue;
        }
        printf("You did not enter 0 or 1\n");
    }
    printf("you entered 0");


    // continue, skip the current cycle of loop, basically all statements after the continue statement would be skipped for that iteration

    return 0;
}
