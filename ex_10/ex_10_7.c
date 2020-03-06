/*
 * ex_10_7.c:
 *
 * Question:
 * =========
 *
 * Write a program that will read a string and rewrite it in the alphabetical
 * order. For example, the word NEPAL should be written as AELNP.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>


/* Function prototype declarations. */
void sortString(char *str);
void swap(char *str, int i, int j);


int main()
{
    char str[100];


    printf("---\nProgram Start\n---\n");

    printf("Enter string: ");
    fgets(str, 100, stdin);


    /* Sort the string. */
    sortString(str);


    /* Display result. */
    printf("---\nResult\n---\n");
    printf("Alphabetical order: %s\n", str);

    getchar();
    return 0;
}


/*
 * Sort a string in alphabetical order.
 *
 * @str: pointer to string to sort.
 *
 * @return: void.
 *
 */
void sortString(char *str)
{
    int i, j;
    int len;

    len = strlen(str);

    /* This is also known as insertion sort. */
    for (i = 1; i < len; i++)
    {
        for (j = i; (j > 0) && (str[j] < str[j-1]); j--)
	{
	    swap(str, j, j-1);
	}
    }
}

/* Swap str[i] and str[j] */
void swap(char *str, int i, int j)
{
    char temp;

    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

