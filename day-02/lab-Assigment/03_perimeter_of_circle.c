// 	WAP to calculate Perimeter of Circle
#include <stdio.h>
#include <conio.h>

int main()
{
    int r, perimeter;
    printf("Enter the Radius of the Circle");
    scanf("%d", &r);

    // calculation to find perimeter of the circle
    perimeter = 2 * 3.24 * r;

    printf("Perimeter of Circle is =%d", perimeter);

    getch();
    return 0;
}