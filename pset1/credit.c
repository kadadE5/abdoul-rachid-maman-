#include<stdio.h>
#include<cs50.h>

int main(void)
{
    long long creditBnumber;
    int Counter = 0;
    long long bcard = 0;
    long long credit = 0;
    long long n = 0;
    int i = 0;
    int sum = 0;
    int sum1 = 0;
    long long creditB1 = 0;

    do
    {
        creditBnumber = get_long_long("enter your credit");
    }
    while (creditBnumber <= 0);

    creditB1 = creditBnumber;
    credit = creditBnumber;

    while (creditB1 > 0)
    {
        creditB1 = creditB1 / 10;
        Counter++;
    }

    if (Counter ==13 || Counter == 15 || Counter == 16)


    for (i = 1; i <= Counter; i++)
    {
        if (i % 2 == 0)
        {
            bcard = creditBnumber % 10;
            sum1 = bcard * 2;
        }

        if (i % 2 != 0)
        {
            bcard = creditBnumber % 10;
            sum1 = bcard * 1;
        }

        if (sum1 > 9)
        {
            sum1 = sum1 - 9;
        }

        sum = sum1 + sum;
        creditBnumber = creditBnumber / 10;

        }
        if ( sum % 10 == 0)
        {

            while ( credit > 200)

            {
                credit = credit / 10;
                n = credit;
            }
            if ((Counter == 13 || Counter == 16 ) && n == 40)

            {
                printf("visa\n");
            }

            if ((Counter == 15) && (n == 34 || n == 37))

            {
                printf("AMEX\n");
            }

            if ((Counter == 16) &&  (n == 52 || n == 53 || n == 54))

            {
                printf("MasterCard\n");
            }

        }
        else
        {
            printf("INVALID\n");
        }

    }















