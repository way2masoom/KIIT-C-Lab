// 	WAP to ass two times in hour, minute & Second format entered
//  through the keyboard in the format [hh:mm:ss]
#include <stdio.h>
#include <conio.h>

int main()
{
    int h1, m1, s1, h2, m2, s2, sum_h, sum_m, sum_s;

    printf("Enter the first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &h1, &m1, &s1);

    printf("Enter the second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    sum_s = (s1 + s2) % 60;
    sum_m = (m1 + m2 + (s1 + s2) / 60) % 60;
    sum_h = h1 + h2 + (m1 + m2 + (s1 + s2) / 60) / 60;

    printf("The sum of the times is: %02d:%02d:%02d\n", sum_h, sum_m, sum_s);

    getch();
    return 0;
}