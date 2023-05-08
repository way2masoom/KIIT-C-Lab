//
#include <stdio.h>
void print()
{
    extern int a;
    printf("\n%d", a);
}

void show()
{
    int a = 0;
    a = a + 10;
    printf("\n%d", a);
}

int a = 20;

int main()
{
    printf("\n%d", a);
    show();
    print();
    return 0;
}