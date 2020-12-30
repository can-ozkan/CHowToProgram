#include<stdio.h>

int main(int argc, char const *argv[])
{

    float kg, height, bmi_value;

    printf("BMI Calculator App\n");
    printf("Please, enter your weight in terms of kilogram\n");
    scanf("%f", &kg);

    printf("Please, enter your height in terms of meter\n");
    scanf("%f", &height);

    bmi_value = kg / (height * height); 

    printf("Bmi is %.2f\n", bmi_value);

    if (bmi_value >= 30)
    {
        printf("Obese\n");
    }
    else if (bmi_value >= 25)
    {
        printf("Overweight\n");
    }
    else if (bmi_value >= 18.5)
    {
        printf("Normal\n");
    }
    else
    {
        printf("Underweight\n");
    }
    
    
    return 0;
}
