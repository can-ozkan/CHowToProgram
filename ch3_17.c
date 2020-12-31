#include<stdio.h>

int main(int argc, char const *argv[])
{
    int account_number;
    float mortgage_amount;
    unsigned int mortgage_term;
    float interest_rate;

    puts("Mortgage Calculator App");

    printf("Enter account number (-1 to end) : ");
    scanf("%d", &account_number);

    while (account_number != -1)
    {
        printf("Enter mortgage account (in dollars): ");
        scanf("%f", &mortgage_amount);

        printf("Enter mortgage term (in years) : ");
        scanf("%u", &mortgage_term);

        printf("Enter interest rate (as a decimal) : ");
        scanf("%f", &interest_rate);

        printf("The monthly payable interest $%.2f\n", ((mortgage_amount*interest_rate*mortgage_term) + mortgage_amount) / (mortgage_term*12)) ;

        printf("------------------------------------\n");
        printf("Enter account number (-1 to end) : ");
        scanf("%d", &account_number);

    }
    
    return 0;
}
