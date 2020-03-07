/*
 * ex_3_5.c:
 *
 * Question:
 * =========
 *
 * Write a program to read an usigned integer and check whether the number is
 * odd or even. If it is even, check whether it is greater than 100 or not and
 * display the appropriate message. If the number is odd, check whether it is
 * divisible by 11 but not by 7 and display the appropriate message.
 *
 */

#include<stdio.h>

int main()
{
    int num;
    int odd = 0, even = 0;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("Number : ");
    scanf("%d", &num);


    /* Check if the number is odd or even. */
    if (num % 2 == 0)
    {
        even = 1;
    }
    else
    {
        odd = 1;
    }


    /* When number is even. */
    if (even == 1)
    {
	printf("Even number\n");

	/* Check if number is greater than 100. */
        if(num > 100)
	{
	    printf("Greater than 100\n");
	}
	else
	{
	    printf("Not greater than 100\n");
	}
    }

    /* When number is odd. */
    if (odd == 1)
    {
	printf("Odd number\n");

	/* Check if number divisible by 11 but not by 7 */
	if ( (num % 11 == 0) && (num % 7 != 0) )
	{
	    printf("Number divisible by 11 but not by 7\n");
	}
	else
	{
	    printf("Not a number divisible by 11 but not by 7\n");
	}
    }

    /*
     * ====
     * Note
     * ====
     *
     * As you can see above, if-else can be nested one inside another.
     *
     *
     */
    


    getchar();

    return 0;
}

