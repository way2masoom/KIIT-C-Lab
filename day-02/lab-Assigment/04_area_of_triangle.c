// 	WAP to calculate area of triangle whose Three side are given
#include <stdio.h>
#include <conio.h>

int main()
{
    // 2 sides of triangle are given
    int l = 10, b = 5, h = 20;

    // printf("Enter the length of Triangle:");
    // scanf("%d", l);

    // printf("Enter the base of Triangle:");
    // scanf("%d", b);

    // printf("Enter the height of Triangle:");
    // scanf("%d", h);

    int area = l * b * h;
    printf("The area of 3 sides triangle is=%d", area);

    getch();
    return 0;
}