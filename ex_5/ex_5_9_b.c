/*
 * ex_5_9_b.c:
 *
 * Question
 * ========
 *
 * Write a program to check whether an unsigned integer entered by the
 * user is a armstrong number.
 *
 * ARMSTRONG
 *
 */

#include<stdio.h>
#include<math.h>

int main()
{
    unsigned int num;
    unsigned int sum, original, remainder;
    int numOfTerms = 0, term;

    /* Get input from user. */
    printf("Num: ");
    scanf("%u", &num);

    original = num;

    /* Find out number of digits in the number. */
    while (num != 0)
    {
        numOfTerms++; 
	num = num / 10; 
    }

    num = original;

    /* Calculate sum of digits raised to required power. */
    sum = 0;
    while (num != 0)
    {
	remainder = num % 10;
	term = pow(remainder, numOfTerms);
	sum = sum + term;

        num = num / 10;
    }


    /* If sum equals to original then the number is an armstrong number. */
    if (sum == original)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }


    getchar();
    return 0;
}

