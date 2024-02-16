#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    //taking the input a,b,c
    printf("Please enter the coefficients of the quadratic equation.\n");
    printf("a : ");
    scanf("%f", &a);
    printf("b : ");
    scanf("%f", &b);
    printf("c : ");
    scanf("%f", &c);
    //
    if (((b * b) - (4 * a * c)) < 0)
    {
        printf("Imaginary roots.\n");
    }
    else
    {
        printf("Real roots\n");
        float root1 = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
        float root2 = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);
        printf("The roots are %f and %f", root1, root2);
    }

    return 0;
}