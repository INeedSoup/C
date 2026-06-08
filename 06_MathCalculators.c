#include <stdio.h>
#include <math.h>

int main()
{
    // Circle calculations
    double radius = 0.0;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    const double PI = 22.0/7.0; // const is used to declare a constant variable, which means its value cannot be changed after initialization

    printf("The diameter of the circle with radius %.2lf is %.2lf\n", radius, 2 * radius);
    printf("The circumference of the circle with radius %.2lf is %.2lf\n", radius, 2 * PI * radius);
    printf("The area of  the circle with radius %.2lf is %.2lf\n", radius, PI * pow(radius, 2));

    // Sphere calculations
    printf("The surface area of a sphere with radius %.2lf is %.2lf\n", radius, 4 * PI * pow(radius, 2));
    printf("The volume of a sphere with radius %.2lf is %.2lf\n", radius, (4.0/3.0) * PI * pow(radius, 3));
    printf("The volume of a hemisphere with radius %.2lf is %.2lf\n", radius, (2.0/3.0) * PI * pow(radius, 3));
    
    // Compound interest calculator
    double principal = 0.0; 
    double rate = 0.0;
    int time = 0;
    int time_compounded = 0;
    double total = 0.0;

    printf("Compoaund Interest Calculator\n");
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time in years: ");
    scanf("%d", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &time_compounded);

    total = principal * pow(1 + (rate / 100.0) / time_compounded, time * time_compounded);

    printf("The total amount after %d years is %.2lf\n", time, total);
    
    return 0;
}