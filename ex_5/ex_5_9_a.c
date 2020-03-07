/*
 * ex_5_9_a.c:
 *
 * Question
 * ========
 *
 * Write a program to check whether an unsigned integer entered by the
 * user is a palindrome.
 *
 * PALINDROME
 *
 */

#include<stdio.h>

int main()
{
    unsigned int num;
    unsigned int reverse, original, remainder;

    /* Get input from user. */
    printf("Num: ");
    scanf("%u", &num);

    original = num;

    /* Calculate the reverse number. */
    reverse = 0;
    while (num != 0)
    {
	reverse = reverse * 10;

	remainder = num % 10;
	reverse = reverse + remainder;

        num = num / 10;
    }


    /* If reverse equals to original then the number is a palindrome. */
    if (reverse == original)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }


    getchar();
    return 0;
}

