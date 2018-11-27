#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("input: ");
    printf("output: ");
    for (int i = 0; i < strlen(s); i++)
    {
        //gets each character of the input
        printf("%c\n", s[i]);
    }
}