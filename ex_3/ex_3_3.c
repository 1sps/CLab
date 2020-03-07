/*
 * ex_3_3.c:
 *
 * Question:
 * =========
 *
 * Write a program to read a string using gets() and display using puts().
 *
 */

#include<stdio.h>

int main()
{
    /*
     * Array of 100 characters.
     *
     * Character array are used to store strings. Strings are a collection of
     * characters.
     */
    char str[100];


    printf("---\nProgram Start\n---\n");
    /* Get string input using gets(). */
    printf("String : ");
    gets(str);

    /*
     * Note
     * ====
     *
     * fgets() 
     *
     * We can use fgets() to read string from user. It is best to use fgets()!
     *
     * In fgets() we can specify how much characters, at maximum, we want to
     * store in the string. So user cannot enter long inputs and cause a stack
     * overflow. 
     *
     * Syntax:
     *
     * fgets(stringName, size, stdin);
     *
     * So in this excercise it would be better to do as below:
     *
     * fgets(str, 100, stdin);
     *
     */


    /* Print string using puts(). */
    printf("User entered: ");
    puts(str);


    getchar();

    return 0;
}

