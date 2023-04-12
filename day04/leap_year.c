// WAP to determine wheather a year entered through keybored is a LEP Year or not
#include <stdio.h>
int main()
{
    int year;
    printf("\n Enter the You want to check the LEP year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("It's a LEP Year");
    }
    else
    {

        printf("It's NOT a LEP Year");
    }

    return 0;
}