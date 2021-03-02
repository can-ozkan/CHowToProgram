#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q, n, fact=1, result=0, rem, i;
    printf("Please enter a value: \n");
    scanf("%d", &n);

    q = n;

    while(q != 0){
        rem = q % 10;
        for(i=1; i<=rem; i++){
            fact*=i;
        }
        result+=fact;
        fact=1;
        q/=10;
    }

    if(n == result)
        printf("Strong number");
    else
        printf("Not a strong number");

    return 0;
}
