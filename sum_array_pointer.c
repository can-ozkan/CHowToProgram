#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4,5};
    int sum = 0;
    int *p;

    for ( p = &a[0]; p <= &a[4]; p++)
    {
        sum = sum + *p;
    }

    printf("%d\n", sum);
    
    return 0;
}
