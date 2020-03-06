/*
 * ex_10_4.c:
 *
 * Question:
 * =========
 *
 * Write a program to reverse a word using recursive function.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>

int reverseString(char *str);

int main()
{
    char str[100];


    printf("---\nProgram Start\n---\n");

    /* Get input from user. */
    printf("Enter string: ");

    /* Always safer to use fgets() to read string from user. */
    fgets(str, 100, stdin);


    /* Call the function. */
    vclw(str);


    getchar();
    return 0;
}


/*
 * Count vowel, consonants, and find the longest word.
 *
 * @str: pointer to string to count words.
 *
 * @return: void
 *
 */
void vclw(char *str)
{
    /* vowel count */
    int vCount = 0;

    /* consonant count */
    int cCount = 0;

    /* Used while finding longest word. */
    int curLen = 0, flag = 0;

    int len;


    len = strlen(str);

    for (i = 0; i < len; i++)
    {
	/* Count vowel and consonants. */
	if (  str[i] == 'a' ||
	      str[i] == 'e' ||
	      str[i] == 'i' ||
	      str[i] == 'o' ||
	      str[i] == 'u'
	    )
        {
	    vCount++;
	}
	else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
	    cCount++;
	}

	/* Code to find the starting index and length of longest word. */
	if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
	{
	    flag = 0;
	}
	else if (flag == 0)
	{
	    flag = 1;
	    curWordIndex = i;
	    curLen = 0;
	}

	if (flag == 1)
	{
	    curLen++;
	}

	if (curLen > lwLen)
	{
	    lwIndex = curWordIndex;
	}
    }

    /* Display results. */
    printf("String: %s\n", str);

    /* Print longest word. */
    printf("Longest word: ");
    for (i = lwIndex; i < lwIndex + lwLen; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');

    /* Print vowel and consonant counts. */
    printf("Vowel count: %d\n", vCount);
    printf("Consonant count: %d\n", cCount);
}

