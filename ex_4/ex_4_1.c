/*
 * ex_3_1.c:
 *
 * Question:
 * =========
 *
 * If a person's age is greater than 65, he gets the senioritiy allowance. Write
 * a program to read the age of a person and display the appropriate message.
 *
 */

#include<stdio.h>

void main(void)
{
    int age;

    /* Get input from user. */
    printf("--Enter below information--\n");
    printf("Age : ");
    scanf("%d", &age);

    if (age > 65)
    {
        printf("Senior Citizen\n");
    }
    else
    {
        printf("Not Senior Citizen\n");
    }


    getchar();
}

