/*
 * ex_2_3.c:
 *
 * Question:
 * =========
 *
 * A program to read three different integers from the user and display the
 * largest numbers from them.
 *
 */

#include<stdio.h>

void main(void)
{
    int a, b, c, l;

    /*
    clrscr();
    */

    printf("Enter three different integers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a>b && a>c)
        l = a;
    else if (b>a && b>c)
        l = b;
    else
        l = c;


    printf("Largest: %d\n", l);

    getchar();
}

