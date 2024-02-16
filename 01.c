#include <stdio.h>
#define PI 3.14 // we defined the value of PI as 3.14
int main()
{
    int radius;
    printf("Enter the radius : ");
    // taking input of radius
    scanf("%d", &radius);
    // printing the surface area of the sphere
    printf("The surface area of the sphere is %.3f\n", 4 * PI * radius * radius);
    // printing the volume of the sphere
    printf("The volume of the sphere is %.3f\n", 4 * PI * radius * radius * radius / 3);
    return 0;
}