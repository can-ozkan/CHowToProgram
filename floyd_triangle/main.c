#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n=1,rows;

    printf("Please, enter number of rows:\n");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++){
        for(j=1; j<=i; j++){
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
