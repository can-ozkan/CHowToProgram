#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[5], i;
    *a = 10;
    *(a+1) = 20;
    *(a+2) = 30;
    *(a+3) = 40;
    *(a+4) = 50;


    printf("%p\n", a);
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", *(a+i));
    }
    
    return 0;
}
