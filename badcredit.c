#include <stdio.h>
#include <cs50.h>

int main()
{
    long long card_num, count_card_num, count_card_num2;
    int count_num = 0, i = 0;

    printf("Number: ");
    card_num = GetLongLong();
    count_card_num = card_num;
    count_card_num2 = card_num;

    while(count_card_num != 0)
    {
        count_card_num /= 10;
        ++count_num;
    }

    int digit[8], sum = 0, mult_2, digit2[8], sum2 = 0, total, first_num;

    first_num = digit[7];

    card_num /= 10;

    for (i = 0; i < 8; i++)
    {
        digit[i] = card_num % 10;
        card_num /= 100;

        mult_2 = digit[i] * 2;
        digit[i] = mult_2 % 10;
        mult_2 /= 10;
        sum += digit[i] + mult_2;

        digit2[i] = count_card_num2 % 10;
        count_card_num2 /= 100;
        sum2 += digit2[i];
    }

    total = sum + sum2;

    if (count_num == 15 && total % 10 == 0)
    {
        printf("AMEX\n");
    }

    else if (count_num == 16 && total % 10 == 0 && first_num == 5)
    {
        printf("MASTERCARD\n");
    }

    else if (count_num == 16 && total % 10 == 0 && first_num == 4)
    {
        printf("VISA\n");
    }

    else if (count_num == 13 && total % 10 == 0)
    {
        printf("VISA\n");
    }

    else
    printf("INVALID\n");

    return 0;
}
