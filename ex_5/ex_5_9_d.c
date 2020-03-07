/*
 * ex_5_9_d.c:
 *
 * Question
 * ========
 *
 * Write a program to check whether an unsigned integer entered by the
 * user is a twin prime.
 *
 * TWIN PRIME
 *
 * A prime number is a twin prime too if (number + 2) or (number - 2) is also a
 * prime.
 *
 */

#include<stdio.h>

int main()
{
    unsigned int num;
    int firstTwin, secondTwin;
    int i;

    /* Will be set to 1 if number is prime. */
    int prime = 0;

    /* Will be set to 1 if number is twin prime. */
    int twinPrime = 0;


    /* Get input from user. */
    printf("Num: ");
    scanf("%u", &num);


    /* Check if the number is prime. */
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
	{
	    break;
	}
    }

    if (i == num)
    {
        prime = 1;
    }


    /*
     * If the number is prime, then check if any of its twin (number +- 2)
     * is also prime.
     */
    if (prime == 1)
    {
        firstTwin = num + 2;

	/* Check if the first twin number is prime. */
        for (i = 2; i < firstTwin; i++)
        {
            if (firstTwin % i == 0)
            {
                break;
            }
        }
	if (i == firstTwin)
	{
	    twinPrime = 1;
	}

	/* If first twin is not prime check for second twin. */
	if (twinPrime == 0)
	{
	    secondTwin = num - 2;

	    /* Check if the second twin number is prime. */
            for (i = 2; i < secondTwin; i++)
            {
                if (secondTwin % i == 0)
                {
                    break;
                }
            }
	    if (i == secondTwin)
	    {
	        twinPrime = 1;
	    }
	}
    }


    if (twinPrime == 1)
    {
        printf("Twin prime\n");
    }
    else
    {
        printf("Not Twin prime\n");
    }


    getchar();
    return 0;
}

