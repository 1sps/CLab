/*
 * ex_9_10.c:
 *
 * Question
 * ========
 *
 * Write a program to read an array in main() of size 10 and of type float. Pass
 * the array to a function that finds the highest and lowest member. Display the
 * sum of the highest and lowest and difference between highest and lowest from
 * main() using passing by reference. Display highest and lowest members from
 * the function and their position in the array as well.
 *
 */

#include<stdio.h>

/* Function prototype declaration. */
void getArrInput(float arr[10], int size);
void highLow(float arr[10], int size, float *highest, float *lowest);


int main()
{
    float arr[10];
    float highest, lowest;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    getArrInput(arr, 10);


    /* Display highest and lowest.*/
    highLow(arr, 10, &highest, &lowest);

    /* Display sum and difference between highest and lowest. */
    printf("Sum and difference of highest and lowest\n");
    printf("Sum: %f\n", highest + lowest);
    printf("Difference: %f\n", highest - lowest);


    getchar();

    return 0;
}


/* Calculate the variance of numbers stored in array. */
void highLow(float arr[10], int size, float *highest, float *lowest)
{
    /* Index of highest and lowest elements. */
    int hIdx, lIdx;

    int i;

    hIdx = lIdx = 0;

    /* Find out the index of highest and lowest elements. */
    for (i = 0; i < size; i++)
    {
        if (arr[i] > arr[hIdx])
	{
	    hIdx = i;
	}

        if (arr[i] < arr[lIdx])
	{
	    lIdx = i;
	}
    }

    /* Print highest and lowest elements. */
    printf("Highest: %f, Position: %d\n", arr[hIdx], hIdx);
    printf("Lowest: %f, Position: %d\n", arr[lIdx], lIdx);

    /* Store highest and lowest value to the reference (address) passed. */
    *highest = arr[hIdx];
    *lowest = arr[lIdx];
}


/* Get input from user and store into array. */
void getArrInput(float arr[10], int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
	scanf("%f", &arr[i]);
    }
}

