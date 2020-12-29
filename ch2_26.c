#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number1, number2;

    printf("Please, enter two integer values: \n");
    scanf("%d%d", &number1, &number2);

    if(number2 % number1 == 0){
        printf("%d is multiple of %d\n", number1, number2);
    }
    else
    {
        printf("%d is not multiple of %d\n", number1, number2);
    }
    
    return 0;
}
