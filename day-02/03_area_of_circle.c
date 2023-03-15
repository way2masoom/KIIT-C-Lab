// 	WAP to find the area of of the circle

#include <stdio.h>
#include <conio.h>

int main()
{
    int r; // r=radius
    float area;

    printf("Enter the Radius: \t");
    scanf("%d", &r);

    // calculation
    area = 3.4 * r * r;

    printf("The Area of Circle is = %f", area);

    getch();
    return 0;
}