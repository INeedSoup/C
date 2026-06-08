#include <stdio.h>

int main(int argc, char *argv[])
{
    /*
        Command-line arguments let users pass information when they start
        a program from the terminal.

        argc = argument count
        argv = argument values

        The first argument, argv[0], is usually the program name.
    */

    printf("Total arguments: %d\n", argc);

    for(int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    if(argc < 2)
    {
        printf("\nTry running this program with your name:\n");
        printf("35_CommandLineArguments Aman\n");
    }
    else
    {
        printf("\nHello, %s!\n", argv[1]);
    }

    return 0;
}
