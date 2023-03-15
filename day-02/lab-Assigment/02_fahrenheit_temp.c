// 	wap to convert temperature from centigrade to fahrenheit scale Formula  [Fahrenheit = (1.8 * celsius) + 32.]
#include <stdio.h>
#include <conio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Enter the Temperature in Celsius:");
    scanf("%f", &celsius);

    // Calculation to find fahrenheit Temperature
    fahrenheit = (1.8 * celsius) + 32;

    printf("Equivalent temperature in Fahrenheit: %.2f", fahrenheit);

    getch();
    return 0;
}