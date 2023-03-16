// 	WAP to calculate area of triangle whose Three side are given
#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z; // Side of Triangle
    float area;

    // taking input from user
    printf("Enter First sides of triangle:\n");
    scanf("%d", &x);

    printf("Enter three Second of triangle:\n");
    scanf("%d", &y);

    printf("Enter three Third of triangle:\n");
    scanf("%d", &z);

    int s; // s=perimeter

    // Calculation to find the perimeter of Triangle
    s = (x + y + z) / 2;

    printf("perimeter of Triangle is = %d", s);

    // Calculation to find the are of Triangle
    area = sqrt(s * (s - x) * (s - y) * (s - z));
    printf("\narea of triangle is %f", area);

    // getch();
    return 0;
}