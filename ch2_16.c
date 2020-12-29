#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number1, number2;
    printf("%s\n", "Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder.");
    printf("Please, enter 2 values: \n");
    scanf("%d%d", &number1, &number2);

    printf("%d + %d = %d\n", number1, number2, number1+number2);
    printf("%d - %d = %d\n", number1, number2, number1-number2);
    printf("%d * %d = %d\n", number1, number2, number1*number2);
    printf("%d / %d = %.2f\n", number1, number2, (float)number1/(float)number2);
    return 0;
}
