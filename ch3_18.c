#include<stdio.h>

int main(int argc, char const *argv[])
{
    float gross_sales;

    puts("Sales-Commission Application");

    printf("Enter sales in dollars (-1 to end) : ");
    scanf("%f", &gross_sales);

    while (gross_sales != -1)
    {
        printf("Salar is %.2f\n", 200 + gross_sales*0.09);

        printf("Enter sales in dollars (-1 to end) : ");
        scanf("%f", &gross_sales);
    }
    


    return 0;
}
