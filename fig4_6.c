#include<stdio.h>
#include<math.h>

// gcc fig4_6.c -o fig4_6 -lm

int main(int argc, char const *argv[])
{
    double principle = 1000.0;
    double rate = 0.05;

    printf("%4s%21s\n", "Year", "Amount of Deposit");

    for (unsigned int year = 1; year <= 10; year++)
    {
        double amount = principle * pow(1 + rate, year);

        printf("%4u%21.2f\n", year, amount);
    }
    
    return 0;
}
