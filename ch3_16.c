#include<stdio.h>

int main(int argc, char const *argv[])
{
    puts("Sales Tax App");

    float amount_collected;
    char month[50];
    float sales;

    printf("Enter total amount collected (-1 to quit) : ");
    scanf("%f", &amount_collected);

    while (amount_collected != -1)
    {
        printf("Enter name of month: ");
        scanf("%s", month);
        sales = amount_collected / 1.09;

        printf("Total Collection: %.2f\n", amount_collected);
        printf("Sales: %.2f\n", sales);
        printf("Country Sales Tax: %.2f\n", sales*0.05);
        printf("State Sales Tax: %.2f\n", sales*0.04);
        printf("Total Sales Tax Collected: %.2f\n", sales*0.05+sales*0.04);

        printf("----------------------------------------\n");
        printf("Enter total amount collected (-1 to quit) : ");
        scanf("%f", &amount_collected);
    }
    
    
    return 0;
}
