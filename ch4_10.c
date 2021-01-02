#include<stdio.h>

int main(int argc, char const *argv[])
{
    double celcius, fahrenheit;

    puts("Conversion Celsius to Fahrenheit");

    for ( celcius = 30; celcius < 51; celcius++)
    {
        fahrenheit = (9 * celcius / 5) + 32;

        printf("%.0lf celcius is %.2lf fahrenheit.\n", celcius, fahrenheit);
    }
    
    return 0;
}
