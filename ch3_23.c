#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int counter=0, number, largest=0;

    puts("Find the Largest Number Application");

    while (counter < 10)
    {
        printf("Please, enter ten values: ");
        scanf("%u", &number);

        if (number > largest)
        {
            largest = number;
        }
        
        counter++;
    }
    
    printf("The largest value is %d\n", largest);
    
    return 0;
}
