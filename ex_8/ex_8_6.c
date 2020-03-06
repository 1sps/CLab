/*
 * ex_8_6.c:
 *
 * Question
 * ========
 *
 * Write a program to read elements of an array in main(). Pass it to a function
 * sort it in ascending/descending order. Display the sorted array from main.
 *
 */

#include<stdio.h>

/* Function prototype declaration. */
void sort(int *arr, int size);
void sortDescending(int *arr, int size);
void swap(int *arr, int i, int j);
void printArray(int *arr, int size);


int main()
{
    int arr[5];
    int i;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);;
    }

    /* Sort in ascending order and print. */
    sort(arr, 5);
    printf("Ascending order: ");
    printArray(arr, 5);

    /* Sort in descending order and print. */
    sortDescending(arr, 5);
    printf("Descending order: ");
    printArray(arr, 5);


    getchar();

    return 0;
}


/* Sort an integer array in ascending order. */
void sort(int *arr, int size)
{
    /* This sort uses insertion sort. */
    int i, j;

    for (i = 1; i < size; i++)
    {
        j = i;
	while (j > 0 && arr[j] < arr[j-1])
	{
	    swap(arr, j, j-1);
	    j--;
	}
    }
}

/* Sort an integer array in descending order. */
void sortDescending(int *arr, int size)
{
    /* This sort uses insertion sort. */
    int i, j;

    for (i = 1; i < size; i++)
    {
        j = i;
	while (j > 0 && arr[j] > arr[j-1])
	{
	    swap(arr, j, j-1);
	    j--;
	}
    }
}


/* Swap arr[i] and arr[j]. */
void swap(int *arr, int i, int j)
{
    int temp;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
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

