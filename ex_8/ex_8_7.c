/*
 * ex_8_7.c:
 *
 * Question
 * ========
 *
 * Write a program to raise the power of each member by 3.
 *
 */

#include<stdio.h>
#include<math.h>

/* Function prototype declaration. */
void printArray(int *arr, int size);


int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int i, term;


    printf("---\nProgram Start\n---\n");


    /* Print array. */
    printf("Array: ");
    printArray(arr, 5);

    /* Raise each element to power of 3 and print. */
    printf("Cube: ");
    for (i = 0; i < 5; i++)
    {
        term = pow(arr[i], 3);
	printf("%d ", term);
    }
    printf("\n");


    getchar();

    return 0;
}


/* Print elements of an array. */
void printArray(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    putchar('\n');
}

