#include<stdio.h>

int main(int argc, char const *argv[])
{
    int input_value, i, flag=0;

    puts("Prime Number Check Application");

    printf("Please, enter a value: ");
    scanf("%d", &input_value);

    for ( i = 2; i < input_value; i++)
    {
        if (input_value % i == 0)
        {
            flag = 1;
        }
    
    }

    if (flag == 0)
    {
        printf("%d is prime.\n", input_value);
    }
    else
    {
        printf("%d is not prime.\n", input_value);
    }
    
    return 0;
}
