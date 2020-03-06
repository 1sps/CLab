/*
 * ex_10_3.c:
 *
 * Question:
 * =========
 *
 * Write a program to read a string in main(), pass it to a function that return
 * the count of numbers of words to main(). Display the count.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>

int countWords(char *str);

int main()
{
    char str[100];

    /* Wordcount */
    int wc;

    printf("---\nProgram Start\n---\n");

    printf("Enter string: ");
    gets(str);

    /*
     * Note gets()  does not take input size. So there can be stackoverflow if
     * user gives very long string as input.
     *
     * It is safer to use fgets() instead. Calling syntax of fgets() is:
     *
     * fgets(stringName, maxSize, stdin);
     *
     * So in this example it would be:
     *
     * fgets(str, 100, stdin);
     *
     * fgets() can be used to avoid stackoverflow attacks when inputting string
     * from user.
     *
     */


    /* Get the wordcount. */
    wc = countWords(str);

    /* Display result. */
    printf("---\nResult\n---\n");
    printf("String: %s\n", str);
    printf("Words: %d\n", wc);

    getchar();
    return 0;
}


/*
 * Count total words in a string.
 *
 * @str: pointer to string to count words.
 *
 * @return: total number of words in string.
 *
 */
int countWords(char *str)
{
    int i, len;

    /* Wordcount*/
    int wc = 0;

    /*
     * Will be set to 1 when we enter word.
     * Wll be set to 0 when we leave a word.
     */
    int flag = 0;


    len = strlen(str);

    for (i = 0; i < len; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
	{
	    flag = 0;
	}
	else if (flag == 0)
	{
	    /*
	     * Here character is a non white space character and flag is 0 which
	     * means previous character was a whitespace. So this is the start
	     * of another word.
	     *
	     * So, increase the word count. And set the flag to indicate that
	     * this word is already counted.
	     *
	     */
	    wc++;
	    flag = 1;
	}
    }

    return wc;
}

