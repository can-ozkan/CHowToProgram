#include <stdio.h>

int main(int argc, char const *argv[])
{
    int input_value = 2, i;

    puts("Prime Numbers from 1 to 100");

    while (input_value < 101)
    {
        int flag = 0;
        for (i = 2; i < input_value-1; i++)
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
        
        input_value++;
    }

    return 0;
}
