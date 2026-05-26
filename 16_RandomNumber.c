#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Psuedo Random - Appear random but are determined by a mathematical formula that uses a seed value to generate a predictable sequence of numbers. 
// Advanced techniques /dev/random or Mersenne Twister

void guessNumber()
{
    srand(time(NULL)); // for getting current time we pass 0 or null

    int guess = 0;
    int tries = 0;

    int min = 1;
    int max = 100;

    int randomNum = (rand() % (max-min + 1)) + min;

    printf("\tNumber Guessing Game\t\n");

    do
    {
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        tries++;
        if(guess > randomNum)
        {
            printf("Too High\n");
        }
        else if(guess < randomNum)
        {
            printf("Too low\n");
        }
    } 
    while (guess != randomNum);
    
    printf("You guess it, the number was %d, it took you %d tries", randomNum, tries);

}


int main ()
{
    srand(time(NULL));

    printf("%d\n", rand());

    printf("%d\n", RAND_MAX);

    int min = 50;
    int max = 100;

    int randomNum = (rand() % (max - min + 1)) + min;
    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    printf("%d %d %d\n", randomNum, randomNum1, randomNum2);

    guessNumber();
    
    return 0;

}