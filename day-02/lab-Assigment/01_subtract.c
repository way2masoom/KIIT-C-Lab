// 	WAP to subtract a number from another number and display the result
#include <stdio.h>
#include <conio.h>

int main()
{
    // Declaring the Variables
    int num1, num2, sub;

    // Taking Number from Users
    printf("Enter the First Number1:");
    scanf("%d", &num1);

    printf("Enter the Second Number2:");
    scanf("%d", &num2);

    // Calculation for Subtracting
    sub = num1 - num2;

    printf("The Subtraction of Num1 and Num2 is=%d", sub);

    getch();
    return 0;
}