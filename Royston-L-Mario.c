#include <cs50.h>
#include <stdio.h>

// void pyramid(int h);

int main(void)
{
// User to enter height of pyramid
    int n;
    do
    {
        n = get_int("Choose a height from numbers 1 to 8, inclusive: ");
    }
    while (n < 1 || n > 8);

// Determine number of loops based on user input for height
    for (int h = 0; h < n; h++)
    {
// Print spaces, on left side of pyramid
        for (int i = 0; i < n - h - 1; i++)
        {
            printf(" ");
        }
// Print hashes, # left side of pyramid
        for (int j = 0; j < h + 1; j++)
        {
            printf("#");
        }
// Print blanks in between pyramid
        for (int b = h + 1; b < h + 3; b++)
        {
            printf(" ");
        }
// Print hashes, # right side of pyramid
        for (int k = 0; k < h + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}