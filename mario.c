#include <stdio.h>
#include <cs50.h>

/**
 * problem set 1 - CS50
 * recreates a half-pyramid using hashes (#) and for this,
 * prompts the user the height of the Mario half-pyramid
 * (it must be a non-negative integer and no greater than 23).
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

        for (int hashes = line + 1; hashes >= 0; hashes--)
        printf("#");

        printf("\n");
    }
}