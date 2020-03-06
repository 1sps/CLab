/*
 * ex_10_1.c:
 *
 * Question:
 * =========
 *
 * Run the flowwoing program, observe the outpout and comment on it.
 *
 */

#include<stdio.h>

/* Needed to string helper functions. */
#include<string.h>

void main()
{
    int i;

    char name1[] = "pokhara city";
    char name2[] = {'k', 'a', 't', 'h', 'm', 'a', 'n', 'd', 'u', ' ', 'c', 'i', 't', 'y', '\0'};

    /*
     * Be sure you know that there are both ways to initialize a string. As seen
     * above.
     *
     */

    for (i = 0; i < strlen(name1); i++)
        printf("%c\n", name1[i]);

    for (i = 0; i < strlen(name2); i++)
        printf("%c\t", name2[i]);

    getchar();
}


