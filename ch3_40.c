#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i=1, counter;

    puts("Powers of 3 with an Infinite Loop");

/*
    while (1)
    {
        i *= 3;
        printf("%d\n", i);
    }

*/

    for (counter = 0; counter < 10; counter++)
    {
        i *= 3;
        printf("%d\n", i);
    }
    
    return 0;
}
