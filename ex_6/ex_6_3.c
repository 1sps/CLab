/*
 * ex_6_3.c:
 *
 * Question:
 * =========
 *
 * Write a program to read two integers (n1 and n2, both positive and n1<n2)
 * from the user and display the prime and palindrome numbers between n1 and n2.
 * Display their counts also.
 *
 */

#include<stdio.h>

int main()
{
    int n1, n2;
    int i, j, flag;
    int term, original, reverse, rem;


    /* Get input from user. */
    printf("---\nProgram Start\n---\n");

    /*
     * Input n1 and n2 from user. Ensure that both n1 and n2 are positive
     * numbers. Also ensure that n1 is greater than n2.
     *
     * Get the input once. Repeat again if user gives invalid input.
     *
     * do while loop is suitable for this task.
     *
     */
    
    do
    {
        printf("n1: ");
        scanf("%d", &n1);
        printf("n2: ");
        scanf("%d", &n2);
    } while (n1 < 1 ||  n2 < 1 || n2 <= n1);



    /*
     * Print prime numbers between n1 and n2.
     */

    printf("---\nPrime numbers between %d and %d\n---\n", n1, n2);

    for (i = n1; i <= n2; i++)
    {
	if (i == 1)
	{
	    /*
	     * 1 is not a prime number. However below code would print it as a
	     * prime number if n1 = 1. So skip this case.
	     */ 
	    continue;
	}


	/*
	 * Code to check if the number is prime or not.
	 */

	flag = 1;
        for (j = 2; j < i; j++)   
	{
	    if (i % j == 0)
	    {
	        flag = 0;

		/*
		 * No need to check further. We already know it is not a prime
		 * number.
		 */
		break;
	    }
	}

	if (flag == 1)
	{
	    /* This number is a prime so print it. */
	    printf("%d  ", i);
	}
    }

    putchar('\n');


    /* Print palindrome numbers between n1 and n2. */
    printf("---\nPalindrome numbers between %d and %d\n---\n", n1, n2);

    for (i = n1; i <= n2; i++)
    {
	term = i;

	/*
	 * Code to check if the number is prime or not.
	 */


	/* original number. */
	original = term;

	/* reverse number. Initially 0. */
	reverse = 0;

	/* Calculate the reverse number. */
	while (term != 0)
	{
	    rem = term % 10;
	    reverse = (reverse * 10) + rem;
	    term = term / 10;
	}

	if (original == reverse)
	{
	    /* This number is a palindrome so print it. */
	    printf("%d  ", i);
	}
    }

    putchar('\n');


    getchar();

    return 0;
}

