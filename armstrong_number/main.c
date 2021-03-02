#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, count=0, result=0, mul=1, cnt, rem;
    printf("Please enter a number: ");
    scanf("%d", &number);

    int q = number;
    while(q != 0){
        q/=10;
        count++;
    }
    cnt = count;
    q = number;

    while(q != 0){
        rem = q % 10;
        while(cnt!=0){
            mul*=rem;
            cnt--;
        }
        result+=mul;
        cnt = count;
        q/=10;
        mul = 1;
    }

    if(result == number)
        printf("Armstrong number");
    else
        printf("Not armstrong number");

    return 0;
}
