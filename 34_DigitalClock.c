#include <stdio.h>
#include <time.h> // time related functions
#include <stdbool.h>
#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif


// time (tm) struct contains seconds, minutes, hours, days, months, year, weekday, year day

void sleepOneSecond()
{
#ifdef _WIN32
    Sleep(1000);
#else
    sleep(1);
#endif
}

int main()
{

    time_t rawtime = 0; // hold number of seconds, this 0 means unix epoch i.e., 00:00:00 UTC on January 1st, 1970, we will measure how many seconds has passed from that day, so that will be the reference day
    struct tm *pTime = NULL;
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning)
    {
        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec); 
        // (*pTime).tm_hour as we have to deference the pointer before accessing its member, or else we can use -> operator 
 
        // printf("%ld\n", rawtime); total seconds from that epoch time

        sleepOneSecond();
    }


    return 0;
}
