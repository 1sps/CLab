/*
 * ex_12_1.c:
 *
 * Question
 * ========
 *
 * Write a program to read years from the user and write to a file only if it is
 * a leap year.
 *
 */

#include<stdio.h>
#include<string.h>

/* Function prototype declaration. */
int isLeap(int year);


int  main()
{
    int year;
    char yearStr[100];
    int more;

    /* File pointer. */
    FILE *fptr;


    printf("---\nProgram Start!\n---\n");

    /* Open the file.*/
    fptr = fopen("years.txt", "w");

    /* Get years from user continuously. Write year to file only if it is a
     * leap year.
     */
    do
    {
        printf("Year: ");
	scanf("%d", &year);

	if (isLeap(year) == 1)
	{
	    /*
	     * Copy integer as string in yearStr. 
	     * Please read more about sprintf.
	     */
	    sprintf(yearStr, "%d", year);

	    /*
	     * Write year to file.
	     */
	    fputs(yearStr, fptr);
	    fputs("\n", fptr);
	}

	printf("Continue ? [y/n]: ");

	/* We need this extra getchar because trailing \n will be there in
	 * input.
	 */
	getchar();

	more = getchar();
    } while (more == 'y');

    /* Close file. */
    fclose(fptr);


    /* Print end message when program ends. */
    printf("---\nProgram End!\n---\n");
    printf("Check file year.txt\n");

    getchar();
    return 0;
}

/*
 * Check if a year is leap year.
 *
 * Return: 1 if leap year
 *         0 if not a leap year
 */
int isLeap(int year)
{
    int leap = 0; 

    if (year % 4 == 0)
    {
	leap = 1; 

	/*
	 * However years divisible by 100 but not divisible by 400 are not
	 * considered leap years!
	 */
        if (year % 100 == 0 && year % 400 != 0)
	{
	    leap = 0;
	}
    }

    return leap;
}

