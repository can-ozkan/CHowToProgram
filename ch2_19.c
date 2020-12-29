#include<stdio.h>

int main(int argc, char const *argv[])
{
    int number1, number2, number3;
    float average = 0;
    int product = 1;
    int smallest, largest;
    
    printf("Please, enter 3 values: \n");
    scanf("%d%d%d", &number1, &number2, &number3);

    printf("Sum is %d\n", number1+number2+number3);
    printf("Average is %.2f\n", ((float)number1+(float)number2+ (float)number3)/3);
    printf("Product is %d\n", number1*number2*number3);

    largest = number1;
    smallest = number1;

    if(number1 < number2 && number1 < number3)
	{
		smallest = number1;
	}
	else if(number2 < number3)
	{
		smallest = number2;
	}
	else
	{
		smallest = number3;
	}
    printf("Smallest is %d\n", smallest);

    if(number1 > number2 && number1 > number3)
	{
		largest = number1;
	}
	else if(number2 > number3)
	{
		largest = number2;
	}
	else
	{
		largest = number3;
	}

    printf("Largest is %d\n", largest);
    

    return 0;
}
