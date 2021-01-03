#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    puts("Triangle-Printing Program");

    for ( i = 0; i<10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%s", "*");
        }
        
        printf("\n");
    }

    printf("--------------------\n");

    for ( i = 0; i<10; i++)
    {
        for (int j = 10; j > i; j--)
        {
            printf("%s", "*");
        }
        
        printf("\n");
    }

    printf("-----------------\n");
    
    for ( i = 0; i<10; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%s", " ");
        }

        for (int z = 9; z >= i; z--)
        {
            printf("%s", "*");
        }
        
        printf("\n");
    }

    printf("-----------------\n");

    for ( i = 0; i<10; i++)
    {
        for (int j = 9; j >= i; j--)
        {
            printf("%s", " ");
        }

        for (int z = 0; z <= i; z++)
        {
            printf("%s", "*");
        }
        
        printf("\n");
    }

    return 0;
}
