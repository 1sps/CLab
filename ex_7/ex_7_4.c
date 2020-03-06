/*
 * ex_7_4.c:
 *
 * Question
 * ========
 *
 * Write a program to create a function void check_prime();. The task of this
 * function is to read a number and check wheher the number is prime or not and
 * display the appropriate message. Be sure that a real number cannot be either
 * prime or a composite. What about negative numbers?
 *
 *
 * Note: This code works for negative numbers too. Try to input negative
 *       numbers, 0 and 1 which are all not prime to verify. Try to understand
 *       how this code works for those cases too.
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
void check_prime(int num);


int main()
{
    int num;


    printf("---\nProgram Start\n---\n");

    printf("number: ");
    scanf("%d", &num);


    /* Call function add from main. */
    check_prime(num);


    return 0;
}

/* Function definition. */
void check_prime(int num)
{
    int i; 

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
	{
	    break;
	}
    }

    if (i == num)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not a prime\n");
    }
}

