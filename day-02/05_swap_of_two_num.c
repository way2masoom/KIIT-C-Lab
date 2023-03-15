// 	WAP to swap two integer number using third variable
#include <stdio.h>
#include <conio.h>

int main()
{

    int a, b, temp;
    printf("Enter the value of A:");
    scanf("%d", &a);

    printf("Enter the value of B:");
    scanf("%d", &b);

    printf("Before swapping::");
    printf("a=%d and b=%d", a, b);

    // Swapping the Variables
    temp = a; // a=5 temp=5
    a = b;    // a=5 b=10
    b = temp; // temp=5 b=5

    printf("\n After Swapping \n");
    printf("The value of A is=%d and B=%d", a, b);

    // getch();
    return 0;
}