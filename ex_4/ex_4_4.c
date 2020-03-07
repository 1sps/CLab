/*
 * ex_3_4.c:
 *
 * Question:
 * =========
 *
 * Write a program to read a character and check whether he character is upper
 * or lower case.
 *
 */

#include<stdio.h>

int main()
{
    char ch;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("Character : ");
    scanf("%c", &ch);

    /* Check upper/lower case. */
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Not an alphabet\n");
    }

    /*
     * ====
     * Note
     * ====
     *
     * You can also check case of a character using helper functions from
     * standard library. 
     *
     * if (islower(ch))
     * {
     *     printf("Lowercase\n") :
     * }
     * else if (isupper(ch))
     * {
     *     printf("Uppercase\n") :
     * }
     * else
     * {
     *     printf("Not an alphabet\n");
     * }
     *
     * You need to #include<ctype.h> to use these functions.
     *
     */
    



    getchar();

    return 0;
}

