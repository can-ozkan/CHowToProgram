#include<stdio.h>

int main(int argc, char const *argv[])
{

    float principal, interest_rate;
    unsigned int loan_in_days;

    puts("Interest Calculator");

    printf("Enter loan principle (-1 to end) : ");
    scanf("%f", &principal);

    while (principal != -1)
    {
        printf("Enter interest rate : ");
        scanf("%f", &interest_rate);

        printf("Enter term of the loan in days : ");
        scanf("%u", &loan_in_days);

        printf("The interest charge is %.2f\n", (principal*interest_rate*loan_in_days) / 365);

        printf("Enter loan principle (-1 to end) : ");
        scanf("%f", &principal);
    }
    
    return 0;
}
