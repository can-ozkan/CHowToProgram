#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int number, result=1;
    int i;

    puts("Factorial Application");
    printf("Please, enter a value: ");
    scanf("%u", &number);

    for ( i = 1; i <= number; i++)
    {
        result *= i;
    }

    printf("%u\n", result);
    
    return 0;
}
