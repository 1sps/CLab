/*
 * ex_10_10.c:
 *
 * Question:
 * =========
 *
 * Write a program to read a string in main(). Pass it to a function. The
 * function converts all the upper case characters to lower case and vice versa.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>

/* Needed to use islower(), isupper(), tolower(), toupper() helper funcitons. */
#include<ctype.h>


/* Function prototype declaration. */
void convertCase(char *str);


int main()
{
    char str[100];


    printf("---\nProgram Start\n---\n");

    printf("Enter string: ");
    fgets(str, 100, stdin);


    /* Convert case of the string. */
    convertCase(str);

    printf("After case conversion: %s\n", str);


    getchar();
    return 0;
}


/*
 * Count total words in a string.
 *
 * @str: pointer to string.
 *
 * @return: void
 *
 */
void convertCase(char *str)
{
    while (*str != 0)
    {
	/*
	 * If lower conert to upper. Else if upper convert to lower.
	 */

        if (islower(*str))
	{
	    *str = toupper(*str);
	}
	else if (isupper(*str))
	{
	    *str = tolower(*str);
	}

	str++;
    }
}

