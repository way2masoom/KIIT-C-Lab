// 	WAP to ass two times in hour, minute & Second format entered
//  through the keyboard in the format [hh:mm:ss]
#include <stdio.h>
#include <conio.h>

int main()
{
    int hrs, min, sec, rem_sec;

    printf("Enter the time in sec");
    scanf("%d", &sec);

    // printf("Enter the first time (hh:mm:ss): ");
    // scanf("%d:%d:%d", &hrs, &min, &sec);

    // printf("Enter the second time (hh:mm:ss): ");
    // scanf("%d:%d:%d", &h2, &m2, &s2);

    // To Convert hours into second
    hrs = sec / 3600;
    // It will Display Remaining Second after Hours
    rem_sec = sec % 3600;

    // To Convert Minute into second
    min = rem_sec / 60;

    // It will Display Remaining Second After Minute
    rem_sec = rem_sec % 60;

    printf("Hour=%d, Minute=%d, and Second=%d", hrs, min, rem_sec);

    getch();
    return 0;
}