/*
 * ex_9_2.c:
 *
 * Question
 * ========
 *
 * Write a program to find the larger of two numbers using the concept of
 * function and pointer. Here pass two numbers from main() to function that
 * finds the larger. Display the larger one from main() without using return
 * statement.
 *
 */

#include<stdio.h>

/* Function prototype declaration. */
void findLarger(int a, int b, int *larger);


int main()
{
    int a, b;
    int larger;

    /* Get input from user. */
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    /* Call the function to store larger number in larger. */
    findLarger(a, b, &larger);

    /* Print the larger value. */
    printf("Larger: %d\n", larger);

    getchar();
    return 0;
}

/* Find larger among two numbers. Store larger number in reference passed. */
void findLarger(int a, int b, int *larger)
{
    if (a > b)
    {
        *larger = a;
    }
    else
    {
        *larger = b;
    }
}

