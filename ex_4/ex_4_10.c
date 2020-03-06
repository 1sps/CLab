/*
 * ex_4_10.c:
 *
 * Question:
 * =========
 *
 * "You are given a task to develop a system to read at least 100 integer
 * numbers and continue until the user enters No. Your system must have capacity
 * to calculate the sum and average of those numbers which are exactly divisible
 * by 9 but not by 6 and lies in between 1 to 100 and display a suitable message
 * if no such number is read".
 * 
 * Write algorithm, flowchart and code to develop the system.
 *
 * TODO:
 *
 * 1. Note saying this is a loop concept.
 * 2. strcmp
 * 
 */

#include<stdio.h>
#include<string.h>
/*
#include<conio.h>
*/

int main()
{
    int num, sum = 0, i;
    float avg;

    /* Count of numbers between 1-100 and are divisible by 9 and not by 6. */
    int count = 0;

    char more[100];

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");

    /* Read 100 integers and more untill user enters No. */
    i = 1;
    while ( i <= 100 || (strcmp(more, "No") != 0) )
    {
        printf("Number: ");
	scanf("%d", &num);

	/*
	 * Update sum only if number lies between 1-100 and is divisible by 9
	 * and not by 6.
	 */
	if ( (num >= 1 && num <= 100) && ( (num % 9 == 0) && (num % 6 != 0) ) )
	{
	    sum += num;

	    /* Update total count of such numbers. */
	    count++;
	}

	/* Update count of total integers read. */
	i++;

	/* Ask from user only after 100 integers are already given. */
	if (i > 100)
	{
	    printf("Continue? [Yes/No] : ");
	    scanf("%s", more);
	}
    }

    /* Display results. */
    if (count == 0)
    {
        printf("No numbers between 1-100 that are divisible by 9 and not by 6.\n");
    }
    else
    {
	avg = (float) sum / count;

        printf("Sum: %d\n", sum);
        printf("Average: %.2f\n", avg);
    }


    /*
    getch();
    */

    return 0;
}

