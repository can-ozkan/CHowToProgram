#include<stdio.h>

int main(int argc, char const *argv[])
{

    int a=5;

    puts("Preincrementing vs Postincrementing");

    printf("%d\n", a);
    printf("%d\n", a++);
    printf("%d\n", a);
    printf("%d\n", ++a);
    return 0;
}
