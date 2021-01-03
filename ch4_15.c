#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double principle = 1000.0;
    int rate;
    unsigned int i;

    puts("Modified Compound-Interest Program");

    printf("%4s%21s%5s\n", "Year", "Amount of Deposit", "Rate");

    for (unsigned int year = 1; year <= 5; year++)
    {
        for (rate = 5; rate <= 10; rate++)
        {
            double amount = principle * pow(1 + ((double)rate / 100), year);
            printf("%4u%21.2f%5d\n", year, amount, rate);
        }
    }

    return 0;
}
