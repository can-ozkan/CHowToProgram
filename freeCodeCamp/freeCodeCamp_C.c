#include <stdio.h>
#include <math.h>

//function prototypes below
void sayHi();
void sayHi2(char name[]);
void sayHi3(char name[], int age);
int calculate_cube(int);
int max(int num1, int num2);
int max3(int num1, int num2, int num3);

struct Student
{
    char studentName[25];
    char major[25];
    int age;
    double gpa;
    

};


int main(int argc, char const *argv[])
{

    
    char characterName[] = "John";
    int characterAge = 35;

    //Variables
    printf("There once was a man named %s.\n", characterName);
    printf("He was %d years old.\n", characterAge);
    printf("But, he really liked the name %s.\n", characterName);
    printf("But didn't being %d\n", characterAge);

    //We can store data inside variables

    //Variable Data Types
    int age = 27;
    double gpa = 3.52;
    char grade = 'A';
    char studentName[] = "Can"; //string, array of chars, special type of data

    //printf function
    printf("%d\n", age);
    printf("%.2lf\n",gpa);
    printf("%c\n", grade);
    printf("%s\n",studentName);
    printf("My favorite %s is %d\n", "number", 500);

    //Working with numbers
    printf("%f\n", 8.9);
    printf("%f\n", 5.0 + 4.5);
    printf("%f\n", 4 + 4.5); //implicit casting
    printf("%.2lf\n", pow(2,4));
    printf("%.2f\n", sqrt(9));
    printf("%f\n", ceil(36.7));
    printf("%f\n", floor(36.7));

    //Constants
    //constant is a type of variable that cannot be modified

    const double PI = 3.14;
    printf("PI is %.2lf\n", PI);
    // PI = 6; will produce assignment of read-only variable 'num'error

    //Getting User Input
    int user_age;
    double user_gpa;
    char user_grade;
    char lecture_name[20];

    printf("Please enter your age: ");
    scanf("%d", &user_age);
    printf("Please enter your gpa: ");
    scanf("%lf", &user_gpa);
    printf("Please enter your lecture name: ");
    scanf("%s", lecture_name);
    printf("Please enter your lecture grade: ");
    scanf(" %c", &user_grade);

    printf("You are %d years old\n", user_age);
    printf("Your gpa is %.2lf\n", user_gpa);
    printf("Your lecture is %s\n", lecture_name);
    printf("Your lecture grade is %c\n", user_grade);

    //the better way is to use fgets when inputting a string value
    printf("Please enter your lecture name: ");
    fgets(lecture_name, 20, stdin);
    printf("Your lecture is %s\n", lecture_name);

    //Building a Basic Calculator
    double num1, num2;
    printf("Enter num1: ");
    scanf("%lf", &num1);
    printf("Enter num2: ");
    scanf("%lf", &num2);

    printf("Sum is %.1lf\n", num1+num2);
    printf("Subtraction is %.1lf\n", num1-num2);
    printf("Multiplication is %.1lf\n", num1*num2);
    printf("Division is %.2lf\n", (float)num1 / num2);

    
    //Building a Mad Libs Game

    char color[20];
    char pluralNoun[20];
    char celebrity[20];

    printf("Roses are {color}\n");
    printf("{plural-noun} are blue\n");
    printf("I love {celebrity}\n");
    printf("-------------------------\n");
    printf("Now, it is your turn\n");

    printf("Please, enter a color: ");
    fgets(color, 20, stdin);
    printf("Please, enter a plural noun: ");
    fgets(pluralNoun, 20, stdin);
    printf("Please, enter a celebrity name: ");
    fgets(celebrity, 20, stdin);

    printf("Roses are %s", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s", celebrity);

    

    //Arrays
    //An array is a data structure where we can store a bunch of related data

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("%d\n", luckyNumbers[i]);
    }

    
    int num_squares[5];
    for ( i = 0; i < 5; i++)
    {
        num_squares[i] = i * i;
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", num_squares[i]);
    }

    

    //Functions
    // Function is a collection of code that performs a specific task



    sayHi();
    sayHi2("Can");
    sayHi3("Can", 27);
    printf("%d\n", calculate_cube(3));

    

   //If Statements

    printf("The bigger is %d\n", max(4,5));
    printf("The bigger is %d\n", max3(7,5,6));

    

    //Building a better Calculator

    double input1, input2;
    char operation;

    printf("Enter a number: ");
    scanf("%lf", &input1);
    printf("Enter a number: ");
    scanf("%lf", &input2);
    printf("Enter the operation (+,-,/,*,%%): ");
    scanf(" %c", &operation);

    if (operation == '+')
    {
        printf("%.2lf\n", input2+input1);
    } else if (operation == '-')
    {
        printf("%.2lf\n", input1-input2);
    } else if (operation == '*')
    {
        printf("%.2lf\n", input1*input2);
    } else if (operation == '/')
    {
        printf("%.2lf\n", input1/input2);
    } else if (operation == '%')
    {
        printf("%.2lf\n", (int)input1 % (int)input2);
    } else
    {
        printf("Improper operation is entered.\n");
    }

    

    //Switch Statement
    //Special type of if statement

    char studentGrade = 'A';

    switch (studentGrade)
    {
    case 'E':
        printf("You did great!");
        break; // It tells the compiler to leave the switch statement
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly!");
        break;
    case 'D':
        printf("You did very bad!");
        break;
    case 'F':
        printf("You failed!");
        break;
    default:
        printf("Invalid grade is entered.");
        break;
    }

    

    //Structs
    //A struct is a data structure that we can store a group of data type
    //We can model real world entities with struct


        return 0;
}

void sayHi()
{
    printf("Hello from sayHi() function\n");
}

void sayHi2(char name[])
{
    printf("Hello %s\n", name);
}

void sayHi3(char name[], int age)
{
    printf("Hello %s. You are %d years old\n", name, age);
}

int calculate_cube(int number)
{
    return number * number * number;

    //printf("Hello"); -> This would never be executed
}

int max(int num1, int num2)
{
    if (num1 > num2)
    {
        return num1;
    }

    return num2;
}

int max3(int num1, int num2, int num3)
{
    int biggest = num1;

    if (num2 > biggest)
    {
        biggest = num2;
    }
    if (num3 > biggest)
    {
        biggest = num3;
    }

    return biggest;
}