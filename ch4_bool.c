#include<stdio.h>
#include<stdbool.h>

int main(int argc, char const *argv[])
{
    bool a = 1;
    bool bool1=true, bool2=false;


    printf("%d\n", bool1 && bool2);
    printf("%d\n", bool1 || bool2);
    printf("%d\n", !bool2);
    printf("%d\n", bool1);
    printf("%d\n", bool2);

    return 0;
}
