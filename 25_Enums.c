#include <stdio.h>

enum Day
{
    SUNDAY = 3, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
// we can assign values to these constants like SUNDAY = 1, by default first constant is 0 and later contants values are incremented by 1

// we can also used typedef here

typedef enum
{
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
}Month;


typedef enum
{
    SUCCESS, FAILURE, PENDING
}Status;


void connectStatus(Status status);

int main()
{
    // enum (enumerations) = A user defined data type that consists of a set of named integer constants, helps replace numbers with readable names

    enum Day today = SUNDAY;
    enum Day tommorow = MONDAY;

    printf("%d ", today);
    printf("%d ", tommorow);

    // after using typedef we now directly write month
    
    Month current = APRIL;
    printf("%d ", current);

    if(today == SUNDAY || today == SATURDAY)
    {
        printf("It's a weekend ");
    }
    else
    {
        printf("It's a weekday ");
    }

    Status status = FAILURE;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status)
{
    switch(status)
    {
        case SUCCESS:
            printf("Connection was successfull\n");
            break;

        case FAILURE:
            printf("Could not connect\n");
            break;
            
        case PENDING:
            printf("Connectiing...\n");
            break;

        default:
            printf("HUH\n");
            break;
        
        // A trigraph is a sequence of three characters (starting with two questions marks ??) that the C compiler replaces with a single punctuation character
        // that allows programmers to write C code on keyboard that lacked certain special symbols required by the langauge, they were officially removed in the C23 standard

    }
}