/*
 * ex_7_8.c:
 *
 * Question
 * ========
 *
 * Write separete programs using recursive function to compute n!, x^n, HCF of
 * two numbers, sum from 1 to n. Declare the variables of appropriate tyes and
 * read from the user. Also, check the read values from the users are also
 * suitable for computing ot not.
 *
 * TODO: hcf
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
int fact(int num);
int power(int x, int n);
int sumUptoN(int n);
int hcf(int n1, int n2);

int hcf(int n1, int n2)
{
    /* TODO: */
    ;
}



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


/* Calculate sum from 1,2, ... upto n. */
int sumUptoN(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n + sumUptoN(n-1);
}


/* Calculate factorial of a number. */
int fact(int num)
{
    /* Base condition. */
    if (num == 1)
    {
        return 1;
    }

    return num * fact(num-1);
}

/* Calculate x raised to power n. */
int power(int x, int n)
{
    /* Base condition. */
    if (n == 0)
    {
        return 1; 
    }
    else if (n == 1)
    {
        return x;
    }

    return x * power(x, n-1);
}

