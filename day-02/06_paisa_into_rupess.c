// 	WAP to convert given pisa into it's Equivalent rupees and paisa as per following format
// Example: 550 pisa=5 Rupees and 50 Pisa
#include <stdio.h>
#include <conio.h>

int main()
{
    int tp, rs, ep; // TP= Total Pisa, RS= Rupees, Ep=Reminder pisa
    printf("Enter Total Paisa : ");
    scanf("%d", &tp);

    rs = tp / 100; // To convert pisa into Rupees
    ep = tp % 100; // To Display reminder pisa

    printf("\nTotal Paisa = %d", tp);

    printf("\nConverted Paisa in Rs = %d.%d", rs, ep);

    getch();
    return 0;
}