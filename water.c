#include <stdio.h>
#include <cs50.h>

/**
 * problem set 1 - CS50
 *
 * program that asks the user how many minutes do you take in
 * the shower (it must be a positive number) and then prints
 * the equivalent number of water bottles (as an integer)
 *
 **/

int main()
{
    int minshower;
    int bottles;

    printf("Shower minutes: ");
    minshower = GetInt();

    // 1 min in the shower = 12 water bottles
    bottles = minshower * 12;

    // print the minutes inputted by the user
    printf("minutes: %d \n", minshower);

    // print the equivalent number of water bottles
    printf("bottles: %d \n", bottles);

}