#include <stdio.h>
#include <stdlib.h>


int main()
{
    // Calloc() = contiguous allocation, allocates memory dynamically and sets all allocated bytes to 0, malloc() is faster, but calloc() leads to less bugs, calloc(#, size)

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

//    int *scores = malloc(number * sizeof(int));

    int *scores = calloc(number, sizeof(int));

    if(scores == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i = 0; i < number; i++) 
    {
        printf("Enter the score for player %d: ", i+1);
        scanf("%d", &scores[i]);
    }

    printf("The scores are: ");

    for(int i = 0; i < number; i++)
    {
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;



    return 0;
}