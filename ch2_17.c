#include<stdio.h>

int main(int argc, char const *argv[])
{
    int u,a,t;
    printf("Write a program than asks the user to enter the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u , a , and t , and prints the final velocity, v , and distance traversed, s , using the following equations.");

    printf("Please enter the values of u, a ,t respectively.\n");
    scanf("%d%d%d", &u,&a,&t);

    printf("Final velocity is %d\n", u+a*t);
    printf("Distance traversed is %d\n", u*t+a*t*t/2);
    
    return 0;
}
