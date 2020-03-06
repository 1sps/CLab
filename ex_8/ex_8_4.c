/*
 * ex_8_4.c:
 *
 * Question
 * ========
 *
 * Write a program to add the elements at corresponding position of two arrays
 * of size n. Read values of n from the user.
 *
 */

#include<stdio.h>

int main()
{
    int arr1[100], arr2[100];
    int n, i, term;


    printf("---\nProgram Start\n---\n");

    /* Get input from user. */
    printf("n: ");
    scanf("%d", &n);


    /* Get input from user. */
    for (i = 0; i < n; i++)
    {
        printf("arr1[%d]: ", i);
        scanf("%d", &arr1[i]);;

        printf("arr2[%d]: ", i);
        scanf("%d", &arr2[i]);;
    }


    /* Print sum of curresponding elements. */
    for (i = 0; i < n; i++)
    {
        term = arr1[i] + arr2[i];
	printf("%d ", term);
    }

    putchar('\n');


    getchar();

    return 0;
}


