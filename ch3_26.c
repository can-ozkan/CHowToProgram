#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int i,j;
    unsigned int number[10];

    puts("Find the Two Largest Numbers Application");
    puts("Please, enter ten values: ");

    for ( i = 0; i < 10; i++)
    {
        scanf("%u", &number[i]);
    }

    for (i = 0; i < 10; i++)
    {
        for ( j = 0; j < 9; j++)
        {
            int temp;

            if (number[j] > number[j+1])
            {
                temp = number[j];
                number[j] = number[j+1];
                number[j+1] = temp;
            }
            
        }
        
    }

    printf("The largest value is %d\n", number[9]);
    printf("The second largest is %d\n", number[8]);
    
    return 0;
}
