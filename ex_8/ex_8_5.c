/*
 * ex_8_5.c:
 *
 * Question
 * ========
 *
 * Write a program to find the highest and lowerst elements of an array of size
 * 5.
 *
 */

#include<stdio.h>

int main()
{
    int arr[5];
    int i;
    int highest, lowest;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    for (i = 0; i < 5; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);;
    }


    /* Find highest and lowest. */
    highest = lowest = arr[0];
    for (i = 0; i < 5; i++)
    {
	if (arr[i] > highest)
	{
	    highest = arr[i];
	}

	if (arr[i] < lowest)
	{
	    lowest = arr[i];
	}
    }

    /* Print result. */
    printf("Highest: %d\n", highest);
    printf("Lowest: %d\n", lowest);


    getchar();

    return 0;
}

