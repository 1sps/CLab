/*
 * ex_11_5.c:
 *
 * Question
 * ========
 *
 * Write a program to compute any two instant memory spaces in a format
 * (Kilobytes: Bytes: Bits) using structure. Build functions to add and subtract
 * given memory spaces where 1KB = 1024B and 1B = 8bits and display the results
 * from the main().
 *
 * TODO:
 *
 */

#include<stdio.h>

struct memorySpace
{
    int kilobytes;
    int bytes;
    int bits;
};


int main()
{
    struct memorySpace ms2, ms2;

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

