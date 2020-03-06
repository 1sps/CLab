/*
 * ex_7_3.c:
 *
 * Question
 * ========
 *
 * Write a program to read a non-negative integer in main(). Pass this integer
 * to a function fact() having return type unsigned integer. This function
 * should calculates the factorial of the received number and return to main()
 * to display it.
 *
 *
 * Note: Please input negative number to see what happens. You can extend this
 *       code further to handle that case too.
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
unsigned int fact(int num);


int main()
{
    int num;
    unsigned int factorial;


    printf("---\nProgram Start\n---\n");

    printf("number: ");
    scanf("%d", &num);


    /* Call function fact() from main. */
    factorial = fact(num);

    printf("Factorial: %u\n", factorial );

    return 0;
}

/* Function definition. */
unsigned int fact(int num)
{
    unsigned int factorial = 1;
    int i;


    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}


