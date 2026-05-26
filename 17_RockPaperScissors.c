#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int UserChoise, int computerChoice);

int main()
{
    srand(time(NULL));

    printf("\tRock, Paper Scissors\t\n");

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch(userChoice)
    {
        case 1:
            printf("You chose rock\n");
            break;
        
        case 2:
            printf("You chose paper\n");
            break;
        
        case 3:
            printf("You chose Scissors\n");
            break;

        default:
            break;
    }

    switch(computerChoice)
    {
        case 1:
            printf("CPU chose rock\n");
            break;
        
        case 2:
            printf("CPU chose paper\n");
            break;
        
        case 3:
            printf("CPU chose Scissors\n");
            break;

        default:
            break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;

}

int getComputerChoice()
{
    return (rand() % 3) + 1;
}

int getUserChoice()
{
    int choice = 0;

    do
    {
        printf("Choose an option\n");
        printf("1 for Rock, 2 for Paper and 3 for Scissors: ");
        scanf("%d", &choice);
    } while (choice < 1 || choice > 3);
    
    return choice;
}

void checkWinner(int userChoice, int computerChoice)
{
    if(userChoice == computerChoice)
    {
        printf("Its a Tie\n");
    }
    else if((userChoice == 1 && computerChoice == 3) || (userChoice == 2 && computerChoice == 1) || (userChoice == 3 && computerChoice == 2))
    {
        printf("You Win\n");
    }
    else
    {
        printf("You lose\n");
    }
}