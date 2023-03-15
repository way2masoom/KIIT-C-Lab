// 	WAP to find centigrade for the given Fahrenheit Temperature [formula= celsius = (fahrenheit - 32) * 5 / 9]
#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the Temperature in Fahrenheit:");
    scanf("%f", &celsius);

    // calculation to find Celsius temperature
    celsius = (fahrenheit - 32) * 5 / 9;

    printf("Equivalent temperature in Celsius: %.2f", celsius);

    getch();
    return 0;
}