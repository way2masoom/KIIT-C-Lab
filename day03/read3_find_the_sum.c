// read a 3_Digits number and find sum of 3-digit
#include <stdio.h>
int main()
{
    int num, a, b, c, d;
    // Tacking Input as 237
    printf("Enter the theree digits Number:");
    scanf("%d", &num);
    a = num % 10; // Remender will disply [ex=237] then only 7 will disply
    b = num / 10; // Quotient will disaply [ex=23]
    c = b / 10;   // It will display 2 [ex=23/10]=2
    d = b % 10;   // It will disply 3 [ex=23%10]=2

    int sum = a + c + d;

    printf("The sum of 3 digits number is = %d", sum);  

    return 0;
}