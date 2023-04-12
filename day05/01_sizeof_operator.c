// size of operator
#include <stdio.h>
int main()
{

    float var = 10.5;
    // Using variable names as input
    printf("The size of int is: %d\n", sizeof(int));
    printf("The size of var is %d\n", sizeof(var));
    printf("The size of 10.5 is: %d\n", sizeof(10.5));

    // type Conversion 
    printf("%d\n",5/2);
    printf("%f\n",5.0/2);

    // Explicait Type conversion 
    int a=50.5;
    printf("%d",(int)50/5);

    // another Example 
    float b=(5/2);
    printf("%f",b);

    return 0;
}