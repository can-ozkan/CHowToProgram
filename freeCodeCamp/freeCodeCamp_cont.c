#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
    char name[30];
    char major[30];
    int age;
    double gpa;


};

int main(int argc, char const *argv[])
{

    //Struct
    struct Student student1;
    student1.age = 27;
    student1.gpa = 3.2;
    strcpy(student1.name, "Can");
    strcpy(student1.major, "Computer Science");

    struct Student student2;
    student2.age = 49;
    student2.gpa = 4.0;
    strcpy(student2.name, "Betul");
    strcpy(student2.major, "Business");

    printf("Student name is %s\n", student1.name);
    printf("GPA is %.2f\n", student1.gpa);
    printf("Student age is %d\n", student1.age);

    printf("Student name is %s\n", student2.name);
    printf("GPA is %.2f\n", student2.gpa);
    printf("Student age is %d\n", student2.age);

    //While Loop
    int index = 1;
    
    while (index < 10)
    {
        printf("Index is %d\n", index);
        index++;
    }

    printf("Current index value is %d\n", index);

    do
    {
        printf("Index is %d\n", index); 
    } while (index < 5);    
    

    return 0;
}
