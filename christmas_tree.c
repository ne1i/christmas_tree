#include <stdio.h>

int main(void)
{
    int rows;
    printf("How many rows do you want in your christmas tree ?\n");
    scanf("%d", &rows);

    printf("Rectangular triangle tree:\n");
    // int last_row = rows * 2 - 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\nIsoceles triangle tree:\n");
    int spaces = rows - 1;
    int stars = 1;
    for (int j = 0; j < spaces - 1; j++)
    {
        printf(" ");
    }
    printf("🌟\n");

    for (int i = 0; i < rows; i++)
    {
        // first print spaces
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // second print stars
        for (int k = 0; k < stars; k++)
        {
            printf("*");
        }

        // last, update amount of spaces and stars
        spaces = spaces - 1;
        stars = stars + 2;
        printf("\n");
    }

    return 0;
}
