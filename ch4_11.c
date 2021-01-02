#include<stdio.h>

int main(int argc, char const *argv[])
{
    puts("Calculating the Sum of Multiples");

    int i;
    int sum = 0;

    for ( i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            sum += i;
        }
        
    }

    printf("Sum of all multiples of 7 from 1 to 100 is %d\n", sum);
    
    return 0;
}
