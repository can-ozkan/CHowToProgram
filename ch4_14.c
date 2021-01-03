#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j, result=1;

    puts("Factorials");
    puts("Factorial Result");

    for ( i = 1; i < 6; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            result *= j;
        }

        printf("%9d%7d\n", i, result);
        result = 1;
        
    }
    
    return 0;
}
