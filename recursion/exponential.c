#include <cs50.h>
#include <stdio.h>

int expo(int, int);

int exponr(int, int);

int main(void)
{
    int result2 = exponr(2, 3);
    int result = expo(2, 3);
    printf("The non recursive result is %i.\n", result2);
    printf("The recursive result is %i.\n", result);
}

int expo(int num, int power)
{
    //any number to the 0th power equals to one
    if (power == 0)
    {
        return 1;
    }
    return num * expo(num, power -1);

}

int exponr(int num, int power)
{
    //if the power is 0 the lowest return would give you 1
    int power = 1;

    //iterate through power
    for(int i = 0; i < power; i++)

        //take power and multiply by num
        // 2*1 = 2*2 = 4*2 = 8 which is 2 to the 3rd power
        power = power * num;
        return power;
}