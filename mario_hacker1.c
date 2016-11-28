#include <stdio.h>
#include <cs50.h>

/**
 * recreates a two half-pyramid using hashes (#),
 * prompts the user the height of the Mario half-pyramid
 * (it must be a non-negative integer and not greater than 23).
 **/

int main()
{

    int height;

    do
    {
        printf("Type the half-pyramid height: ");
        height = GetInt();
    }
    while (height < 0 || height > 23);

    // draw the half-pyramid
    for (int line = 0; line < height ; line++)
    {
        for (int spaces = line; spaces < height - 1; spaces++)
        printf(" ");

        for (int hashes = line; hashes >= 0; hashes--)
        printf("#");

        printf("  ");

        for (int hashes = line; hashes >= 0; hashes--)
        printf("#");

        printf("\n");
    }

    return 0;
}