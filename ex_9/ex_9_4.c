/*
 * ex_9_4.c:
 *
 * Question
 * ========
 *
 * This program asks the required size of array to the user and displays the
 * addresses of allocated blocks.
 *
 */

#include<stdio.h>

/* Header file for memory management functions */
#include<malloc.h>

/* Header file for exit() */
#include<stdlib.h>


void main(void)
{
    int n, i;

    /* Pointer variable declaration */
    float *address;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    /* Using calloc function to allocate memory for n number of float member */
    address = (float *) calloc(n, sizeof(float));

    if (address == NULL)
    {
        printf("Memory can not be allocated.");
	/* To exit from the program, if the content of address is NULL. */
	exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("\nAddress of %d block is %p ", i, (address + i));
    }

    free(address);


    getchar();
}

