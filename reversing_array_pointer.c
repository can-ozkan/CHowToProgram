#include<stdio.h>
#define number 5

int main(int argc, char const *argv[])
{
    int a[number] = {1,2,3,4,5};
    int *p = a;

    for ( p = a+number-1; p >=a ; p--)
    {
        printf("%d\n", *p);
    }
    
    return 0;
}
