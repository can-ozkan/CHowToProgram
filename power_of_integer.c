#include<stdio.h>

int main(int argc, char const *argv[])
{
    int base, exponent, power=1, expo;
    double power1=1.0;

    printf("Please, enter the base: ");
    scanf("%d", &base);

    printf("Please, enter the exponent: ");
    scanf("%d", &exponent);

    expo = exponent;
    if (exponent > 0)
    {
        while (exponent != 0)
        {
            power*=base;
            exponent--;
        }
        printf("%d to the power of %d is %d", base, expo, power);
    }

    else if (exponent < 0)
    {
        while (exponent != 0)
        {
            power1 = power1 * (1.0 / base);
            exponent++;
        }
        printf("%.2f to the power of %.2f is %.2f", (double)base, (double)expo, power1);
    }
    else{
        printf("%d to the power of %d is %d", base, expo, 1);
    }
    
    return 0;
}
