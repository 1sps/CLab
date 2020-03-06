/*
 * ex_11_4.c:
 *
 * Question
 * ========
 *
 * Create a stucture TIME containing hour, minutes and seconds as it member.
 * Write a program that uses this structure to input start time and stop time in
 * main(). Pass the structure to a function that calculates the sum and
 * difference of start time and stop time. Display sum and difference from
 * main().
 *
 * TODO:
 *
 */

#include<stdio.h>

struct TIME
{
    int hour;
    int minutes;
    int seconds;
};


int main()
{
    struct TIME startTime, stopTime;

    printf("---\nProgram Start\n---\n");

    /* Get input from user. */
    printf("Start time [hh-mm-sec]: ");
    scanf("%d-%d-%d", &startTime.hour, &startTime.minutes, &startTime.seconds);

    printf("Stop time [hh-mm-sec]: ");
    scanf("%d-%d-%d", &stopTime.hour, &stopTime.minutes, &stopTime.seconds);

    /* Get sum. */
    printf("Start time: %d-%d-%d\n", startTime.hour, startTime.minutes,
                                     startTime.seconds);
    /* Get difference. */

    /* Display result. */

    getchar();
    return 0;
}

