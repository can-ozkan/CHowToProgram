#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    unsigned int counter = 1; //initialization

    while (counter <= 10)
    {
        printf("%u\n", counter); 
        counter++;
    }
    
    return 0;
}
