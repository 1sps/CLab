/*
 * ex_5_4.c:
 *
 * Question
 * ========
 *
 * Write a program to read an integer (suppose n) and find the product from 1 to
 * n if n is even else find the sum from 0 to n.
 *
 */

#include<stdio.h>

int main()
{
    int n;
    int product, sum;
    int i;


    /* Get the value of n from user. */
    printf("n: ");
    scanf("%d", &n);


    /* If n is even. */
    if (n % 2 == 0)
    {
	product = 1;
        for (i = 1; i <= n; i++)
	{
	    product = product * i;
	}
	printf("Product: %d\n", product);
    }
    /* If n is odd. */
    else
    {
        sum = 0;
        for (i = 0; i <= n; i++)
	{
	    sum = sum + i;
	}
	printf("Sum: %d\n", sum);
    }

    getchar();
    return 0;
}

