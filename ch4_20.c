#include<stdio.h>

int main(int argc, char const *argv[])
{
    

    puts("Truth Tables");
    printf("%d AND %d is %d\n", 0, 0, 0&&0);
    printf("%d AND %d is %d\n", 0, 1, 0&&1);
    printf("%d AND %d is %d\n", 1, 0, 1&&0);
    printf("%d AND %d is %d\n", 1, 1, 1&&1);

    printf("\n");

    printf("%d OR %d is %d\n", 0, 0, 0||0);
    printf("%d OR %d is %d\n", 0, 1, 0||1);
    printf("%d OR %d is %d\n", 1, 0, 1||0);
    printf("%d OR %d is %d\n", 1, 1, 1||1);


    return 0;
}
