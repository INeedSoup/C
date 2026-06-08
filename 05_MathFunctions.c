#include <stdio.h>
#include <math.h>

int main()
{
    int num1 = 0;
    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("The square root of %d is %.2f\n", num1, sqrt(num1));
    // sqrt function returns a double, so we use %.2f to format the output to 2 decimal places

    printf("The %d to the power of 4 is %d\n", num1, (int)pow(num1, 4));
    // pow function returns a double, so we need to cast it to int to match the format specifier %d, otherwise it will cause undefined behavior

    int num2 =  3.14;
    printf("The value of %d rounded to the nearest integer is %d\n", num2, (int)round(num2));
    // round function returns a double, so we need to cast it to int to match the format specifier %d, otherwise it will cause undefined behavior

    printf("The value of %d rounded down to the nearest integer is %d\n", num2, (int)floor(num2));
    // floor function returns a double, so we need to cast it to int to match the format specifier %d, otherwise it will cause undefined behavior   

    printf("The value of %d rounded up to the nearest integer is %d\n", num2, (int)ceil(num2));
    // ceil function returns a double, so we need to cast it to int to match the format specifier %d, otherwise it will cause undefined behavior

    int num3 = -5;
    printf("The absolute value of %d is %d\n", num3, abs(num3));
    // abs function returns an int

    int num4 = 3;
    printf("The natural logarithm of %d is %.2f\n", num4, log(num4));
    // log function returns a double, so we use %.2f to format the output to 2 decimal places, or we can use %lf to match the double return type of log function or we can type cast it to required type
    
    int angle = 30;
    double pi = 22.0/7.0; // We can also use M_PI constant defined in math.h for a more accurate value of pi
    printf("The sine of %d degrees is %.2f\n", angle, sin(angle * pi / 180));
    // sin function expects the angle in radians, so we need to convert degrees to radians by multiplying the angle by M_PI / 180, where M_PI is a constant defined in math.h that represents the value of pi
    printf("The cosine of %d degrees is %.2f\n", angle, cos(angle * pi / 180));
    printf("The tangent of %d degrees is %.2f\n", angle, tan(angle * pi / 180));  
    
    return 0;
}