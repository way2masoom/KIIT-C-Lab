// finding the root of quadratics Equation
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter the value of A,B and C:");
    scanf("%f%f%f", &a, &b, &c);

    // if a=0 then programs will end here
    if (a == 0)
    {
        printf("its is not a quadratic equation.");
        return 0;
    }

    // condition to find Quadratics equation
    float determinatnt = b * b - 4 * a * c;
    float root1, root2;

    if (determinatnt > 0)
    {
        root1 = (-b + sqrt(determinatnt)) / (2 * a);
        root1 = (-b - sqrt(determinatnt)) / (2 * a);
        printf("The roots of Quadratics equation are :%.2f and %.2f", root1, root2);
    }

    else if (determinatnt < 0)
    {
        float real = -b / (2 * a);
        float img = sqrt(abs(determinatnt)) / (2 * a);
        printf("The roots of quardatic equation are :\n");
        printf("%d+%di and", real, img);
        printf("%d-%di and", real, img);
    }

    else

    {
        root1 = -b / (2 * a);
        printf("The roots of quadratic equation are :%d", root1);
    }

    return 0;
}