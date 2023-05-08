//
#include <stdio.h>
void print()
{
    int a = 0; // for auto storage function
    a = a + 10;
    print("\n %d ", a);
}
int main()
{
    print();

    return 0;
}