#include<stdio.h>

int main(int argc, char const *argv[])
{
    int highest_rainfall;
    int current_year_rainfall;

    printf("Please enter the highest rainfall ever in one season for a country, and the rainfall in the current year for that country\n");
    scanf("%d%d", &highest_rainfall, &current_year_rainfall);

    if (current_year_rainfall > highest_rainfall)
    {
        highest_rainfall = current_year_rainfall;
    }

    printf("Highest is %d\n", highest_rainfall);
    
    return 0;
}
