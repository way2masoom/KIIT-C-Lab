// Wap to find the root of the quadratic equation [ax2+bx+c=0]
#include <stdio.h>
#include <math.h>
int main()
{
    // Deceleration
    float a, b, c, det, x1, x2;

    printf("Enter The value of A:\n");
    scanf("%f", &a);
    printf("Enter the value of B:\n");
    scanf("%f", &b);
    printf("Enter The value of C:\n");
    scanf("%f", &c);
    
    //
    det = (b * b - 4 * a * c);
    if (det > 0)
    {
        x1 = ((-b / 2 * a) + sqrt(det) / 2 * a);
        x2 = ((-b / 2 * a) - sqrt(det) / 2 * a);
        printf("the roots are = %.2f and  %.2f", x1, x2);
    }

    else if (det < 0)
    {
        float real = (-b / 2 * a);
        float img = (sqrt(-(det)) / 2 * a);
        printf("the roots are = %.2f +  %.2fj", real, img);
        printf(" and %.2f - %.2fj", real, img);
    }

    else

    {
        x1 = -b / (2 * a);
        printf("the roots are = %.2f", x1);
    }
    return 0;
}
