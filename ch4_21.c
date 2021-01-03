#include <stdio.h>

int main(int argc, char const *argv[])
{

    int i;
    puts("ASCII Values");

    for (i = 0; i < 127; i++)
    {
        if (i % 10 == 0)
        {
            printf("\n");
        }

        printf(" %d %c ", i, i);
    }

    return 0;
}
