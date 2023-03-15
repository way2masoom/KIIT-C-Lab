/*
Display your last two digits of your roll number in
Decimal
Octal
hexaDecimal*/
#include <stdio.h>
#include <conio.h>

int main()
{
    int roll = 17;
    printf("Displaying my Roll Number in Decimal Number:\n");
    printf("Roll Number in Decimal is =%d \n", roll);
    printf("Roll Number in Octal is =%o \n", roll);
    printf("Roll Number in hexadecimal is =%x \n", roll);

    printf("My roll number in Character =%d", roll);

    getch();
    return 0;
}