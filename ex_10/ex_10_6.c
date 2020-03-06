/*
 * ex_10_6.c:
 *
 * Question:
 * =========
 *
 * Write separete programs that exactly simulate the task strlen(), strcat(),
 * strcpy() and strcmp() using user defined functions.
 *
 * TODO: strcmp
 *
 */

#include<stdio.h>

/* Function prototype declatations. */
int strlenKec(char *str);
int strcatKec(char *str1, char *str2);
int strcpyKec(char *dest, char *src);
int strcmpKec(char *str1, char *str2);

int main()
{
    char str[100];


    getchar();
    return 0;
}


/*
 * Calculate the length of a strinfg
 *
 * @str: pointer to string.
 *
 * @return: length of string
 *
 */
int strlenKec(char *str)
{
    int i = 0;

    while (str[i] != 0)
    {
        i++; 
    }

    return i;
}

/*
 * Concatenate two strings.
 *
 * @str1: pointer to string 1.
 * @str2: pointer to string 2.
 *
 * @return: length of string1 after concatenation.
 *
 */
int strcatKec(char *str1, char *str2)
{
    int i = 0, j = 0;

    while (str1[i] != 0)
    {
        i++; 
    }

    while (str2[j] != 0)
    {
        str1[i++] = str2[j++];
    }

    str1[i] = 0;

    return i;
}

/*
 * Copy one string to other.
 *
 * @dest: Destination string.
 * @src: Source string.
 *
 * @return: length of dest.
 *
 */
int strcpyKec(char *dest, char *src)
{
    int i = 0;

    while (src[i] != 0)
    {
        dest[i] = src[i];
    }

    dest[i] = 0;

    return i;
}

/*
 * Compare two strings.
 *
 * @str1: String 1.
 * @str2: String 2.
 *
 * @return:  0  if two strings are equal
 *          -1  if str1 is greater
 *           1  if str2 is greater
 *
 */
int strcmpKec(char *str1, char *str2)
{
    /* todo */
    return 0;
}
