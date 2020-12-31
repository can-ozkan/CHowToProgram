#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    puts("Tabular Output");
    puts("A\tA+3\tA+6\tA+9");

    for ( i = 1; i < 6; i++)
    {
        printf("%d\t%d\t%d\t%d\n", 7*i,7*i+3,7*i+6,7*i*9);
    }
    

    return 0;
}
