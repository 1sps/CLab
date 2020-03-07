/*
 * ex_1_11.c:
 *
 * Write a program to read time given for C programming study a day at your home
 * in hours, minutes, and seconds and display the toal time in seconds in 30
 * days.
 *
 */

#include<stdio.h>

int main()
{
    int hours, minutes, seconds;

    /* Total seconds each day */
    int secondsEachDay;

    /* Total seconds in 30 days */
    int totalSeconds;

    /* Get input from user. */
    printf("--Enter total time you spend each day for C--\n");

    printf("Hours: ");
    scanf("%d", &hours);

    printf("Minutes: ");
    scanf("%d", &minutes);

    printf("Seconds: ");
    scanf("%d", &seconds);

    /* Calculate total seconds spent each day. */
    secondsEachDay = (hours * 60 * 60) + (minutes * 60) + seconds;

    /* Calculate total seconds spent in 30 days. */
    totalSeconds = secondsEachDay * 30;


    /* Display result */
    printf("---------------------------\n");
    printf("Time spent by student for C\n");
    printf("---------------------------\n");

    printf("Daily: %d hours %d minutes %d seconds\n", hours, minutes, seconds);

    printf("Time spent in 30 days: %d seconds\n", totalSeconds);

    getchar();

    return 0;
}

