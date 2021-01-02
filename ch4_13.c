#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int i, number, sum1=0;
    long int square_sum=0, cube_sum=0;

    puts("Natural Numbers Arithmetic");
    puts("Natural numbers do not include negative numbers or zero");

    printf("Enter a natural number: ");
    scanf("%d", &number);

    for ( i = 1; i <= number; i++)
    {
        sum1 += i;
    }

    for ( i = 1; i < number; i++)
    {
        square_sum = square_sum + (i*i);
    }

    for ( i = 1; i < number; i++)
    {
        cube_sum = cube_sum + (i*i*i);
    }
    

    printf("Sum is %d\n", sum1);
    printf("Sum of the squares is %ld\n", square_sum);
    printf("Sum of the cubes is %ld\n", cube_sum);

    return 0;
}
