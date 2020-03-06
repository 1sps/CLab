/*
 * ex_9_8.c:
 *
 * Question
 * ========
 *
 * Write separete programs to compute the median, range, variance and standrad
 * deviation.
 *
 * Note: 
 *
 * Variance = ( summation(x^2) / n ) - (summation(x) / n)^2
 * Standard deviation = squarRoot(Variance)
 *
 */

#include<stdio.h>
#include<math.h>

/* Function prototype declaration. */
void getArrInput(int *arr, int size);
float getVariance(int *arr, int size);


int main()
{
    int arr[10];
    float variance, sd;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    getArrInput(arr, 10);

    /* Calculate varicance and sd. */
    variance = getVariance(arr, 10);
    sd = sqrt(variance);

    /* Print result. */
    printf("Variance: %f\n", variance);
    printf("Standard deviation: %f\n", sd);

    getchar();

    return 0;
}


/* Calculate the variance of numbers stored in array. */
float getVariance(int *arr, int size)
{
    float variance;

    /* Summation of x^2 */
    int sumX2 = 0;

    /* Summation of x */
    int sumX = 0;

    int i, n = size;

    /* Calculate both summations. */
    for (i = 0; i < size; i++)
    {
        sumX2 += arr[i] * arr[i];
	sumX += arr[i];
    }

    variance = (sumX2 / n) - (pow(sumX/n, 2));

    return variance;
}


/* Get input from user and store into array. */
void getArrInput(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("arr[%d]: ", i);
	scanf("%d", &arr[i]);
    }
}
