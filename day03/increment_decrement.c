

#include <stdio.h>
int main()
{
    int b = 10;
    printf("b =%d \n ", (++b) + b + b); // It will print 33

    // printf("b =%d \n",  b + (++b) + b ); // It will print 36

    // printf("b =%d \n",  b+b+(++b)); // It will prin/t 37

    // printf("b =%d \n",  b+b*(++b)); // It will print 210

    return 0;
}