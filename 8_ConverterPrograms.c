#include <stdio.h>

int main()
{
    printf("Weight Convertor\n");
    printf("Enter 1 to convert from kilograms to pounds\n");
    printf("Enter 2 to convert from pounds to kilograms\n");

    int choice;
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter the weight in kilograms: ");
        double kg = 0.0f; 
        scanf("%lf", &kg);
        printf("%.2lf kg is equal to %.2lf pounds\n", kg, kg * 2.20462);
    }
    else if (choice == 2)
    {
        printf("Enter the weight in pounds: ");
        double pounds = 0.0f;
        scanf("%lf", &pounds);
        printf("%.2lf pounds is equal to %.2lf kg\n", pounds, pounds / 2.20462);
    }
    else
    {
        printf("Invalid choice");
        getchar(); 
        // This is to consume the newline character left in the input buffer after scanf, preventing it from affecting subsequent input operations.
    }

    printf("Temperature Convertor\n");
    printf("Is your temperature in Celsius or Fahrenheit? (C/F): ");

    char choice1;
    scanf(" %c", &choice1);

    if(choice1 == 'C')
    {
        printf("Enter the temperature in Celsius: ");
        double Celsius = 0.0f;
        scanf("%lf", &Celsius);
        printf("%.2lf °C is equal to %.2lf F\n", Celsius, (Celsius * 9/5) + 32);
    }
    else if (choice1 == 'F')
    {
        printf("Enter the temperature in Fahrenheit: ");
        double Fahrenheit = 0.0f;
        scanf("%lf", &Fahrenheit);
        printf("%.2lf °F is equal to %.2lf C\n", Fahrenheit, (Fahrenheit - 32) * 5/9);
    }
    else
    {
        printf("Invalid choice");
        getchar();
    }

    return 0;
}