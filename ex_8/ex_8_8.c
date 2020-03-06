/*
 * ex_8_8.c:
 *
 * Question
 * ========
 *
 * Write a program to read an unsigned integer array in main(). Pass it to a
 * function that counts the Armstrong members and return the count to main().
 *
 */

#include<stdio.h>
#include<math.h>

/* Function prototype declaration. */
int countArmstrongElements(int *arr, int size);
int isArmstrong(int num);
void getArrInput(int *arr, int size);
int countDigits(int num);


int main()
{
    int arr[10];
    int count;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    getArrInput(arr, 10);

    /* Get the count of elements which are armstrong numbers. */
    count = countArmstrongElements(arr, 10);
    printf("Total number elements which are Armstrong numbers: %d\n", count);


    getchar();

    return 0;
}


/* Count number of elements which are armstrong numbers. */
int countArmstrongElements(int *arr, int size)
{
    int i, count = 0;

    for (i = 0; i < size; i++)
    {
        if (isArmstrong(arr[i]) == 1)
	{
	    count++;
	}
    }

    return count;
}

/*
 * Check if a number is Armstrong number.
 *
 * Returns: 1 if num is an armstrong number
 *          0 if num is not an armstrong number
 *
 */
int isArmstrong(int num)
{
   int number = num;
   int sum = 0;
   int term;

   /* Number of digits in number.*/
   int n;

   /* Remainder */
   int rem;

   /* Will be set to 1 if num is armstrong. */
   int armstrong = 0;


   /* Get total number of digits in the number. */
   n = countDigits(num);

   while (num != 0)
   {
       rem = num % 10;
       term = pow(rem, n);
       sum += term;
       num /= 10;
   }

   if (sum == number)
   {
       armstrong = 1;
   }

   return armstrong;
}

/* Count digits of a number. */
int countDigits(int num)
{
    int count = 0;

    do
    {
	count++;
        num /= 10;
    } while (num != 0);
    
    return count;
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
