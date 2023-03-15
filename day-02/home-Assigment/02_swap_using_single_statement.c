// 	WAP to SWAP the contents of two variable by using a single statement for swap in C
#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b;
    printf("Enter the value of A:");
    scanf("%d", &a);

    printf("Enter the value of B:");
    scanf("%d", &b);

    printf("Before swapping::");
    printf("A=%d and B=%d", a, b);

    // Swapping the Variables
    // method 1:
    /*[a=10 & b=20]

    a= (a+b)-(b=a) [a=(10+20)-(20)=10 and b=20] */

    // a = (a + b) - (b = a);

    // method 2:
    /*[a=10 & b=20]
    a= (a*b)/(a=b) [a=(10*20)=200/(10)=20 and b=a(10)] */

    a = (a * b) / (b = a);

    printf("\n After Swapping \n");
    printf("A=%d and B=%d", a, b);

    getch();
    return 0;
}