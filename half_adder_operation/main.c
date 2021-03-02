#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, carry, a, b;
    printf("Enter the two numbers: \n");
    scanf("%d%d", &a, &b);

    while(b != 0){
        sum = a ^ b;
        carry = (a & b) << 1;
        a = sum;
        b = carry;
    }

    printf("Sum is %d\n", sum);
    return 0;
}
