/*
 * ex_3_2.c:
 *
 * Question:
 * =========
 *
 * Write a program to read a character and a string using scanf() and display
 * using printf(). 
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    char ch;
    char str[100];


    printf("---\nProgram Start\n---\n");

    /* Get input from user. */
    printf(":: Enter below info ::\n\n");

    /* Read a string using scanf(). */
    printf("String: ");
    scanf("%s", str);


    /*
     * Note scanf() does not read the '\n' (newline/enter) key. Which will still
     * be present in input. So we use getchar() once to read that character.
     * Comment out below code to see the effect.
     */
    getchar();


    /* Read a character using scanf(). */
    printf("Character: ");
    scanf("%c", &ch);

    /* 
     * Note
     * ====
     *
     * We donot have to use '&' operator in scanf() for reading strings. Only
     * need to write the name of the character array, which in this example is
     * 'str'.
     *
     * Also note  we can use gets(str) to read the string as you will see in
     * next excercise.
     *
     */


    /* Print string and character using printf(). */
    printf("\n--User Entered--\n");
    printf("Character: %c\n", ch);
    printf("String: %s\n", str);


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

    getchar();

    return 0;
}

