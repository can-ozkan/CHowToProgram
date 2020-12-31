#include<stdio.h>

int main(int argc, char const *argv[])
{
    int hours_worked;
    float hourly_rate;

    puts("Salary Calculator App");

    printf("Enter # of hours worked (-1) to end : ");
    scanf("%d", &hours_worked);

    while (hours_worked != -1)
    {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourly_rate);

        if (hours_worked <= 40)
        {
            printf("Salary is %.2f\n", hours_worked*hourly_rate);
        }
        else
        {
            printf("Salary is %.2f\n", (40*hourly_rate)+ (hours_worked - 40) * hourly_rate*1.5);
        }
        

        printf("Enter # of hours worked (-1) to end : ");
        scanf("%d", &hours_worked);
    }

    return 0;
}
