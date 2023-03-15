// 	WAP to convert given second into its equivalent hour, Minute and second as per the following
//  Example Format Example 7560 second= 2hour, 27 minute and 40 second
#include <stdio.h>
#include <conio.h>

int main()
{

    int sec, min, hrs;
    printf("Enter the Second:", sec);
    scanf("%d", sec);

    hrs = sec / 3600;        // To Convert hours into second
    min = (sec % 3600) / 60; // To Convert Minute into second
    sec = sec % 60;          // To Convert Second into second

    printf("Minute=%d and Hour=%d, and second=%d", min, hrs, sec);

    getch();
    return 0;
}