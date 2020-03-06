/*
 * ex_7_1.c:
 *
 * Question
 * ========
 *
 * Write a program to create a function float add(int, float);. The task of this
 * function is to calculate the sum of passed values and return it to the
 * calling function. Call this function from main() and display the result.
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
float add(int n1, float n2);


int main()
{
    int n1;
    float n2, sum;


    printf("---\nProgram Start\n---\n");

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%f", &n2);


    /* Call function add from main. */
    sum = add(n1, n2);

    printf("Sum: %.2f\n", sum );

    return 0;
}

/* Function definition. */
float add(int n1, float n2)
{
    float sum;

    sum = n1 + n2;

    return sum;
}


