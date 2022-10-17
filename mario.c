#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n, i, j; //Variables needed
    do
    {
        n = get_int("Height: "); //Ask for integre
    }
    while (n < 1 || n > 8);
    for (i = n; i > 0; i--) //Loops
    {
        for(j = 1; j <= n; j++)
        {
            if (j >= i)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n"); //New line
    }
}