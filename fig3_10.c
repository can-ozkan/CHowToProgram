#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 0;
    int user_input;

    while (student < 10)
    {
        printf("%s\n", "Enter result (1-pass, 2-fail) : ");
        scanf("%d", &user_input);

        if (user_input == 1)
        {
            passes++;
            student++;
        }
        else if (user_input == 2)
        {
            failures++;
            student++;
        }
        else
        {
            puts("Your input is wrong");
        }
        
    } // end of while

    printf("Passed %u\n", passes);
    printf("Failed %u\n", failures);

    if (passes > 8)
    {
        puts("Bonus to instructor");
    } 
    
    return 0;
}
