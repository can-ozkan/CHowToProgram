#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int counter=0;
    int grade, total=0;
    float average;

    printf("%s\n", "Enter grade, -1 to end");
    scanf("%d", &grade);

    while (grade != -1)
    {
        total += grade;
        counter++;

        printf("%s\n", "Enter grade, -1 to end");
        scanf("%d", &grade);

    }

    if (counter != 0)
    {
        average = (float)total / counter;
        printf("Class average is %.2f\n", average);
    }
    else
    {
        puts("No grades were entered");
    }
    
    return 0;
}
