#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int number,i,flag=1;
    printf("Hello world!\n");
    printf("Please enter a value:\n");
    scanf("%d", &number);

    double a = ceil(sqrt(number));
    printf("%.2f\n", a);

    for(i=2; i<=a; i++){
        if(number % i == 0)
            flag = 0;

    }

    if(flag == 1)
        printf("Prime");
    else
        printf("Not a Prime");

    return 0;
}
