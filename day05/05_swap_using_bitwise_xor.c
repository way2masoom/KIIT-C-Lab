// swap two number using third vharible
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of A:");
    scanf("%d", &a);

    printf("Enter the value of B:");
    scanf("%d", &b);

    printf("Number Before Swap A=%d and B=%d \n", a, b);

    // swapping the varable
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("Number Before Swap A=%d and B=%d \n", a, b);
    return 0;
}