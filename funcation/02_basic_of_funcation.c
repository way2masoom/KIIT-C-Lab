// Program to add two value using Function
#include <stdio.h>
// Created  A Function
int Sum()
{
    int a, x, y; // Deceleration
    printf("This is Program to Add two Number\n");

    // Taking data from User
    printf("Enter First number A:\n");
    scanf("%d", &x);

    printf("Enter Second number B:\n");
    scanf("%d", &y);

    // adding the Integer
    a = x + y;
    printf("Sum of two Integer is = %d ", a);
}

int main()
{
    // calling the function
    Sum();

    return 0;
}