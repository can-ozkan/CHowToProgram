#include <stdio.h>
#include <stdlib.h>

int main()
{
    int decimal=0, weight=1,rem, binary;

    printf("Please, enter a binary number:\n");
    scanf("%d", &binary);

    while(binary != 0){
        rem = binary % 10;
        decimal += rem*weight;
        binary/=10;
        weight*=2;
    }

    printf("%d\n", decimal);
    return 0;
}
