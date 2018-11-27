#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(void)
// {
//     string s = get_string("before: ");
//     printf("after: ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z')
//         {
//             printf("%c", s[i] - ('a' - 'A'));
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");

//MORE EFFICIENT METHOD IS
// {
//     string s = get_string("before: ");
//     printf("after: ");
//     for (int i = 0, n = strlen(s); i < n; i++)
//     {
//         if (islower(s[i]))
//         {
//             printf("%c", toupper(s[i]));
//         }
//         else
//         {
//             printf("%c", s[i]);
//         }
//     }
//     printf("\n");

//EVEN MORE EFFICIENT
{
    string s = get_string("before: ");
    printf("after: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //toupper prints out the character capitalized but if it's a char like ! then it'll just print it out
        printf("%c", toupper(s[i]));

    }
    printf("\n");

}