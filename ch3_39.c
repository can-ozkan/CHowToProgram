#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j;

    puts("Checkerboard Pattern of Asterisks");

    for ( i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
        {
            for ( j = 0; j < 8; j++)
            {
                printf("%s", "* ");
            }
            puts("");
        }

        else
        {
            printf("%s", " ");
            for ( j = 0; j < 8; j++)
            {
                printf("%s", "* ");
            }
            puts("");
        }
        
    }
    
    return 0;
}
