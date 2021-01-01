#include<stdio.h>

int main(int argc, char const *argv[])
{
    const float PI = 3.14;
    float radius;

    puts("Diameter, Circumference and Area of a Cirle");

    printf("Please, enter radius (r) value: ");
    scanf("%f", &radius);

    printf("Circumference (2.PI.r) is %.2f\n", 2*PI*radius);
    printf("Area (PI.r.r) is %.2f\n", PI*radius*radius);
    printf("Diameter (r*2) is %.2f\n", radius*2);

    return 0;
}
