// fib(n) = fib(n-1) + fib(n-2)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0, b=1,i;
    int result,n;

    printf("Please enter the n: \n");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d\n", a);
        result = a + b;
        a = b;
        b = result;
    }
    return 0;
}
