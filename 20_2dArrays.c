#include <stdio.h>

int main()
{
    // 2D array: an array where each element is an array, array[][] = {{}, {},{}},{{},{},{}};

    int numbers[][3] = {{1, 2, 3}, 
                        {4, 5, 6}, 
                        {7, 8, 9},
                        {10, 11, 12}};
//For declaration of multi-dimensional array, array must have bounds for all dimensions except the first
// for 2D array array[row][column], used for grid and matrix



    for(int i = 0; i < 4; i++) // rows 
    {
        for(int j = 0; j < 3; j++) // coloumns
        {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    char numpad[][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'}, 
                        {'7', '8', '9'}, 
                        {'*', '0', '#'}};
    
    for(int i = 0; i < 4; i++) // rows 
    {
        for(int j = 0; j < 3; j++) // coloumns
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
            

    return 0;
}