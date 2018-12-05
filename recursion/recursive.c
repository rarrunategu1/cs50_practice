//factorialize and fibonacci
#include <cs50.h>
#include <stdio.h>

//delclaration - i want a function called fact that returns an integer and takes one integer as a parameter
//in c you cannot call a function unless it's been declared.  no nested functions in c
long long fact(int);

long long fib(int);

int main(void)
{
    //5!
    long long result = fact(20);
    printf("5! = %lld\n", result);
    long long result2 = fib(40);
    printf("8th position of fibonnacci is %lld\n", result2);

}

long long fib(int num)
{
    //if 1 or 0 return 1 or 0
    if (num <= 1)
    {
        return num;
    }
    return fib(num - 1) + fib(num -2);

}

long long fact(int num)
{
   if(num <= 1)
   {
    return num;
   }
   return num * fact(num - 1);
}
