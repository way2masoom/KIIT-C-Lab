// Function Basics
#include <stdio.h>
// Created a function
/********   Function Declaration/prototype *******/
float sum();

/***** Global Variable  ******/
int a = 10;
float b = 5.5;

int main()
{
    float result;   // Local variable
    result = sum(); // Function call
    printf("\n %d", result);
    {
        
    }

    return 0;
}