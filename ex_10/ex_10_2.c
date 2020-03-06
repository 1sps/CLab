/*
 * ex_10_2.c:
 *
 * Question:
 * =========
 *
 * Write a program to check whether a string given by the user is Palidrome or
 * not.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>

int isPalindromeString(char *str, int size);

void main()
{
    char str[100];

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


    printf("---\nResult\n---\n");

    /* Check if palindrome and print appropriate message. */
    if (isPalindromeString(str, strlen(str)) == 1)
    {
        printf("%s: Palindrome\n", str);
    }
    else
    {
        printf("%s: Not Palindrome\n", str);
    }

    getchar();
}


/*
 * Check if a string is a palindrome.
 *
 * @str: pointer to string to check.
 * @size: size of the string.
 *
 * @return: 1 if palindrome
 *          0 if not a palindrome
 *
 */
int isPalindromeString(char *str, int size)
{
    int i;
    int mid;

    /* Will be set to 0 if string is not a palindrome. */
    int flag = 1;

    mid = size / 2;

    for (i = 0; i < mid; i++) 
    {
        if (str[i] != str[size - 1 - i])
	{
	    /* Not a palindrome. Set flag to 0. */
	    flag = 0;
	    break;
	}
    }

    return flag;
}


