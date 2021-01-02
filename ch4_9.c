#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int counter;
    int sum = 0;
    int number;

    puts("Sum and Average of Integers");
    puts("Please, enter how many numbers you will enter: ");
    scanf("%u", &counter);

    for (int i = 0; i < counter; i++)
    {
        scanf("%d", &number);
        sum +=number;
    }

    printf("Sum is %d\n", sum);

    return 0;
}
