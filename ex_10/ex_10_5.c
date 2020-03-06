/*
 * ex_10_5.c:
 *
 * Question:
 * =========
 *
 * Write a program to reverse a word using recursive function.
 *
 * TODO: reverse or just print reverse.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>

void reverseWord(char *str);

int main()
{
    char str[100];


    printf("---\nProgram Start\n---\n");

    /* Get input from user. */
    printf("Enter word: ");
    scanf("%s", str);


    printf("---\nResult\n---\n");
    printf("Original word: %s\n", str);
    printf("Reverse word: ");

    /* Call function that prints the word in reverse.*/
    reverseWord(str);

    getchar();
    getchar();
    return 0;
}


/*
 * Print a word in reverse a word.
 *
 * @str: pointer to string to reverse.
 *
 * @return: void
 *
 */
void reverseWord(char *str)
{
    /* Base condition. */
    if (*str == '\0')
    {
        return;
    }

    reverseWord(str+1);

    putchar(*str);
}

