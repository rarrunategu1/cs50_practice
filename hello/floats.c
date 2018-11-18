// arithmetic
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for x
    float x = get_float("x: ");

    //Promt user for y
    float y = get_float("y: ");

    //arithmetic
    printf("%f plus %f is %f\n", x, y, x + y);
    printf("%f minus %f is %f\n", x, y, x - y);
    printf("%f times %f is %f\n", x, y, x * y);
    printf("%f divided by %f is %f\n", x, y, x / y);

}