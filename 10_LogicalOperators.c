#include <stdio.h>
#include <stdbool.h>

int main() 
{   
    // Logical operators in C: && (logical AND), || (logical OR), ! (logical NOT), and ^ (logical XOR)
    // Used to combine or invert boolean expressions

    printf("Enter your temperature in Celsius: ");
    double tempCelsius = 0.0f;
    scanf("%lf", &tempCelsius);

    if (tempCelsius > 0.0f && tempCelsius < 30.0f) // && Logical AND: true if both conditions are true
    {
        printf("The weather is good\n");
    }
    else 
    {
        printf("The weather is not good\n");
    }

    printf("Is it sunny outside? (1 for yes, 0 for no): ");
    int sunnyInput = 0;
    bool isSunny = false;
    scanf("%d", &sunnyInput);
    isSunny = sunnyInput != 0;
 
    if(isSunny || tempCelsius > 30.0f) // || Logical OR: true if at least one of the conditions is true
    {
        printf("It's a hot day\n");
    }
    else{
        printf("It's not a hot day\n");
    }

    bool isRaining = false;
    int rainingInput = 0;
    printf("Is it raining outside? (1 for yes, 0 for no): ");
    scanf("%d", &rainingInput);
    isRaining = rainingInput != 0;

    if(!isRaining && !isSunny) // ! Logical NOT: true if the condition is false
    {
        printf("It's a cloudy day\n");
    }
    else
    {
        printf("You might see rainbows today\n");
    }

    if(isSunny ^ isRaining) // Exclusive OR: true if exactly one of the conditions is true
    {
        printf("It's either sunny or raining, but not both\n");
    }
    else
    {
        printf("It's either sunny and raining, or neither\n");
    }

    return 0;
}
