#include<stdio.h>

int main(int argc, char const *argv[])
{
    double current_population;
    double growth_rate;

    int i;


    puts("World-Population-Growth Calculator Application");

    printf("Please, enter current world population: ");
    scanf("%lf", &current_population);

    printf("Please, enter growth rate for a year: ");
    scanf("%lf", &growth_rate);


    for ( i = 1; i < 6; i++)
    {
        printf("World population will be %.2lf within %d year\n", current_population + (i * growth_rate) * (current_population / 100), i);
    }
    
    return 0;
}
