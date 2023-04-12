// Read a, b,c and fild the largest using nested if sles statement
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter the three Number :");
    scanf("%d%d%d", &num1, &num2, &num3);

    // Condition to make Num1 largest
    if (num1 > num2 && num1 > num3)
    {
        printf("Num1 is larger %d", num1);
    }
    // Condition to make Num2 largest
    if (num2 > num1 && num2 > num3)
    {
        printf("Num2 is larger %d", num2);
    }

    // Condition to make Num3 largest
    if (num3 > num1 && num3 > num2)
    {
        printf("Num3 is larger %d", num3);
    }

    return 0;
}