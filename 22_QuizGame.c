#include <stdio.h>
#include <ctype.h>


int main()
{
    
    char questions[][100] = {"What is the largest planet in the solar system?",
                            "What is the hottest planet?",
                            "What planet has the most moons?",
                            "Is the Earth flat?"};

    char options[][100] = {"A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
                            "A. Mecury\nB. Venus\nC. Earth\nD. Mars",
                            "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
                            "A. Yes\nB. No\nC. Maybe\nD. Sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions)/sizeof(questions[0]);
        
    printf("*** QUIZ GAME ***\n");

    int points = 0;

    for(int i = 0; i < questionCount; i++)
    {
        char choice = '\0';
        printf("\n%s\n\n", questions[i]);
        printf("%s\n", options[i]);
        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        choice = toupper(choice); // to convert option entires to upper case

        if(choice == answerKey[i])
        {
            printf("Correct\n");
            points++;
        }
        else
        {
            printf("Wromg\n");
        }
    }

    printf("\nFinal Score is %d out of %d", points, questionCount);

    return 0;
}