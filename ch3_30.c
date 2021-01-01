#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x=9, y=11;

    puts("Dangling-Else Problem");
    if ( x < 10 )
    if ( y > 10 )
    puts( "*****" );
    else
    puts( "#####" );
    puts( "$$$$$" );

    x=11;
    y=9;

    printf("------\n");
    if ( x < 10 )
    if ( y > 10 )
    puts( "*****" );
    else
    puts( "#####" );
    puts( "$$$$$" );

    return 0;
}
