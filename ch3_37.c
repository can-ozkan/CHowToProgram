#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int counter;

    puts("Detecting Multiples of a Number");

    for ( counter = 1; counter <= 500; counter++)
    {
        if (counter % 50 == 0)
        {
            printf("\n");
        }
        else
        {
            printf("$ ");
        }
        
        
    }
    


    return 0;
}
