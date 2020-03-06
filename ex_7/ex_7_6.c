/*
 * ex_7_6.c:
 *
 * Question
 * ========
 *
 * Write a program to read an unsigned integer in main(). Pass it to a function
 * void countsDigits(unsigned int *, int *, int *);. This function counts the
 * number of odd digits and even digits in the number. Display the counts from
 * main. Use concept of passing arguments by reference.
 *
 *
 * Note: This question is not clear in printed manual. So there are some changes
 *       here.
 *
 */


#include<stdio.h>

/* Function prototype declaration. */
void countsDigits(unsigned int *num, int *oddCount, int *evenCount);


int main()
{
    unsigned int num;
    int oddCount, evenCount;


    printf("---\nProgram Start\n---\n");

    printf("number: ");
    scanf("%u", &num);


    /*
     * Call function to count odd and even digits. Pass reference (address) of
     * evenCount and oddCount.
     *
     */
    countsDigits(&num, &oddCount, &evenCount);

    /* Display counts. */
    printf("Odd: %d\n", oddCount);
    printf("Even: %d\n", evenCount);


    return 0;
}


/* Count even and odd digits in a number. */
void countsDigits(unsigned int *num, int *oddCount, int *evenCount)
{
    int number, digit;

    number = *num;

    *oddCount = 0;
    *evenCount = 0;

    do
    {
	digit = number % 10;

	if (digit % 2 == 0)
	{
	    *evenCount = *evenCount + 1; 

	    /*
	     * Note: We cannot do *evenCount++. If, at all, we want to use
	     * increment operator we have to do (*evenCount)++. 
	     *
	     * Why? See preceedence of * and ++ operator.
	     *
	     */
	}
	else
	{
	    *oddCount = *oddCount + 1; 
	}

        number /= 10;
    } while (number != 0);
}

