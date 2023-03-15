// Write a program to calculate the area of a rectangle formula(area = (1/2)* b * h)
#include <stdio.h>
#include <conio.h>

int main()
{
    float b, h; // B= Base and H= Height
    float area;

    printf("Enter the Base of Triangle:");
    scanf("%f", &b);

    printf("Enter the Height of Triangle:");
    scanf("%f", &h);

    // Calculation
    area = (1.0 / 2.0) * b * h;
    printf("The are of TRIANGLE is =%f", area);

    getch();
    return 0;
}