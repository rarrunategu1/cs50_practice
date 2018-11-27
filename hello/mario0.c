#include <cs50.h>
#include <stdio.h>

int main(void)
//PRINTS 4 ?
// {
//     printf("????\n");
// }

// {
//PRINTS AS MANY ? AS USER GIVES IT HORIZONTALLY
//     int n = get_int("Number: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("?");

//     }
//     printf("\n");
// }
    //PRINTS VERTICAL LINE OF BLOCKS
// {   //Prompt User for a positive number
//     int n;
//     do
//     {
//       n = get_int("Positive Number: ");
//     }
//     while(n <= 0);

//     //Print out that many bricks
//   for (int i = 0; i < n; i++)
//   {
//       printf("#\n");
//   }
// }

    //prints a block of blocks equal in blocks in width and height
{
    int n;
    do
    {
      n = get_int("Positive Number: ");
    }
    while(n <= 0);

    //Print out that many bricks
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
    {
      printf("#");
    }

    printf("\n");
}
}

