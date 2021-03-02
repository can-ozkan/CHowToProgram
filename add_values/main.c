#include <stdio.h>
#include <stdlib.h>

int main()
{

    int x,y;

    printf("Adding values without plus operator\n");
    printf("Please enter two values: \n");
    scanf("%d%d", &x, &y);

    if(y > 0){
        while(y != 0){
            x++;
            y--;
        }
    }

    else{
        while(y != 0){
            x--;
            y++;
        }
    }

    printf("Sum is %d\n", x);
    return 0;
}
