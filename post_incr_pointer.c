#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {5,16,7,89,45,32,23,10};
    int *p = &a[0];

    printf("%d\n", *(p++));
    printf("%d\n", *p);
    return 0;
}