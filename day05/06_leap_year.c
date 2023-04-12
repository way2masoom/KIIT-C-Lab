// Check the leap year
#include <stdio.h>
int main()
{
    int years;
    printf("Enetr the year to check the leap Year:");
    scanf("%d", &years);
    
    // Condition to check Leap years
    if (years % 100 == 0)
    {
        if (years % 400 == 0)
            printf("It's a Lep Year \n");
        else
        {
            printf("It's a NOT Leap Year");
        }
    }
    else
    {
        if (years % 4 == 0)
            printf("It's a  Leap Year");
        else
        {
            printf("It's a NOT Leap Year");
        }
    }

    return 0;
}