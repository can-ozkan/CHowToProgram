#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    int max_value = INT_MAX;
    int min_value = INT_MIN;
    unsigned int max_unsigned_int = UINT_MAX;

    printf("Max int value is %d\n", max_value);
    printf("Min int value is %d\n", min_value);
    printf("Max unsigned int value is %u\n", max_unsigned_int);
    
    
    return 0;
}
