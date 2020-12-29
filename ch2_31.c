#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i;

    printf("number square cube\n");

    for(i=0; i<=10; i++){
        printf("%d %6d %6d\n", i, i*i, i*i*i);
    }

    return 0;
}
