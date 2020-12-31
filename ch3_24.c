#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    puts("Tabular Output");
    puts("N\tN*N\tN*N*N\tN*N*N*N");

    for ( i = 1; i < 11; i++)
    {
        printf("%d\t%d\t%d\t%d\n", i,i*i,i*i*i,i*i*i*i);
    }
    
    return 0;
}
