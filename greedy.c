#include <stdio.h>
#include <cs50.h>
#include <math.h>

/**
 * prompts the user how much change is owed
 * and then show the minimum number of coins
 * with which can give this change
 **/

int main()
{
    float amount;

    do
    {
       printf("How much change is owed? ");
       amount = GetFloat();
    }
    while (amount <= 0); // when user type a negative number

    float amount_c = amount * 100; // convert user’s input: dollars to cents
    int rest = roundf(amount_c); // round "amount_c" to the nearest int
    int coin_count = 0; // track the number of coins

    while (rest % 25 > 25 || rest >= 25)
    {
        coin_count++; // increase the count of coins
        rest -= 25; // decrease the coin value
    }

    while (rest % 10 >= 10 || rest >= 10)
    {
        coin_count++;
        rest -= 10;
    }

    while (rest % 5 >= 5 || rest >= 5)
    {
        coin_count++;
        rest -= 5;
    }

    while (rest % 1 >= 1 || rest >= 1)
    {
        coin_count++;
        rest -= 1;
    }

    printf("%d\n", coin_count); // print the number of coins used

}