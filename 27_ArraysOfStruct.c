#include <stdio.h>

typedef struct
{
    char model[25];
    int year;
    int price;
}Car;

int main()
{
    Car car1 = {"Mustang", 2025, 32000};
    Car car2 = {"Corvette", 2026, 68000};
    Car car3 = {"Challenger", 2024, 29000};

    printf("%s %d $%d\n\n", car1.model, car1.year, car1.price);
    
    printf("%s %d $%d\n\n", car2.model, car2.year, car2.price);
    
    printf("%s %d $%d\n\n", car3.model, car3.year, car3.price);

    // Now what we can do is create an array of structs that would make it easy to access stuff

    Car cars[] = {{"Mustang", 2025, 32000},
                 {"Corvette", 2026, 68000},
                 {"Challenger", 2024, 29000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++)
    {
        printf("%s %d $%d\n\n", cars[i].model, cars[i].year, cars[i].price);
    }



    return 0;
}