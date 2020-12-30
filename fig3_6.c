#include<stdio.h>

int main(int argc, char const *argv[])
{
    unsigned int counter = 1;
    int grade, total=0;
    float average;

    while (counter<=10)
    {
        printf("%s\n", "Enter grade: ");
        scanf("%d", &grade);
        total+=grade;
        counter++;
    }
    
    average = (float)total / 10;
    printf("Class average is %.2f.\n", average);

    return 0;
}
