/*
 * ex_10_8.c:
 *
 * Question:
 * =========
 *
 * Write a program to find the frequency of the character in the string entered
 * by a user.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>


/* Function prototype declaraction. */
int getFrequency(char *str, char ch);

int main()
{
    char str[100], ch;
    int frequency;


    printf("---\nProgram Start\n---\n");

    /* Get the string and search character from user. */
    printf("Enter string: ");
    fgets(str, 100, stdin);

    printf("Character: ");
    ch = getchar();

    /* Get frequency and print it. */
    frequency = getFrequency(str, ch);
    printf("Frequency: %d\n", frequency);

    getchar();
    return 0;
}


/*
 * Count the frequency of a character in a string.
 *
 * @str: pointer to string.
 *
 * @return: frequency of the character.
 *
 */
int getFrequency(char *str, char ch)
{
    int count = 0;

    while (*str != 0)
    {
        if (*str == ch)
	{
	    count++;
	}
	str++;
    }


    return count;
}

