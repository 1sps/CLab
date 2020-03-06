/*
 * ex_4_8.c:
 *
 * Question:
 * =========
 *
 * Write a program that prompts the user to enter any integer from 1 to 7 and
 * displays the corresponding day of the week.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    int num;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("Enter a number between 1 and 7.\n");
    printf("Number: ");
    scanf("%d", &num);


    /*
     * Display corresponding day of the week.
     */

    /* Print result only if a valid number. */
    if (num >= 1 && num <= 7)
    {
        printf("Day %d of the week: ", num);
        switch(num)
        {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
        }
    }
    else
    {
        printf("Sorry. Number should be between 1-7.\n");
    }


    /*
    getch();
    */

    return 0;
}

