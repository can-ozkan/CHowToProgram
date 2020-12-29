#include<stdio.h>

int main(int argc, char const *argv[])
{
    int input_value;

    printf("Please, enter an integer value: \n");
    scanf("%d", &input_value);

    if (input_value % 2 == 0)
    {
        printf("%d is an even integer\n", input_value);
    }
    else
    {
        printf("%d is an odd integer\n", input_value);
    }
    

    
    
    return 0;
}
