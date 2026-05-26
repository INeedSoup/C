#include <stdio.h>
#include <string.h>

int main()
{
    char fruits[][10]= {"Apple", "Banana", "Coconut", "Pineapple"};
    
    int size = sizeof(fruits) / sizeof(fruits[0]);

    fruits[0][0] = 'e';
    fruits[0][4] = 'A';


    for(int i = 0; i < size; i++)
    {
        printf("%s\n", fruits[i]);
    }
    
    char names[3][25] = {0};

    size = sizeof(names)/sizeof(names[0]);

    for(int i = 0; i < size; i++)
    {
        printf("Enter a name: ");
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strlen(names[i]) - 1] = '\0';
    }

    for(int i = 0; i < size; i++)
    {
        printf("%s ", names[i]);
    }

    return 0;
}