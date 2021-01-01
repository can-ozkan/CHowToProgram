#include<stdio.h>

int main(int argc, char const *argv[])
{
    int user_input,i,j;

    puts("Square of Asteriks");

    printf("Please enter a value between 1 - 20: ");
    scanf("%d", &user_input);

    while (user_input<1 || user_input > 20)
    {
        puts("Wrong value");
        printf("Please enter a value between 1 - 20: ");
        scanf("%d", &user_input);
    }


    for ( i = 0; i < user_input; i++)
    {
        for ( j = 0; j < user_input; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    


    return 0;
}
