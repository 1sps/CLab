/*
 * ex_7_5.c:
 *
 * Question
 * ========
 *
 * Combine question 1, 2, 3, 4 using switch statement. For this, display a menu
 * on the screen to prompt the user whether he wants to sum two numbers or sum
 * of digits of an integer or calculate the factorial of an integer or to know
 * whether a number is prime or not. 
 *
 * TODO: Why cant we declare variables inside case?
 *
 */


#include<stdio.h>

/* Function prototype declarations. */
float add(int n1, float n2);
void sumOfDigits(int num);
unsigned int fact(int num);
void check_prime(int num);


int main()
{
    /* TODO: Why cant we declare variables inside case? */
    int choice;
    int n1;
    float n2, sum;
    int num;
    int factorial;


    printf("---\nProgram Start\n---\n");

    printf("Choose one\n");
    printf("[1] Sum of two numbers\n");
    printf("[2] Sum of digits of an integer\n");
    printf("[3] Calculate the factorial\n");
    printf("[4] Check Prime\n");

    printf("Your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
	    printf("---\nAdd two numbers\n---\n");

	    printf("Enter two numbers: ");
	    scanf("%d%f", &n1, &n2);

	    sum = add(n1, n2);
	    printf("Sum = %.2f\n", sum);

	    break;
        case 2:
	    printf("---\nSum of digits\n---\n");

	    printf("Enter integer: ");
	    scanf("%d", &num);

	    sumOfDigits(num);
	    break;
        case 3:
	    printf("---\nFactorial\n---\n");

	    printf("Enter integer: ");
	    scanf("%d", &num);

	    factorial = fact(num);
	    printf("Factorial: %d\n", factorial);
	    break;
        case 4:
	    printf("---\nCheck prime\n---\n");

	    printf("Enter integer: ");
	    scanf("%d", &num);

	    check_prime(num);
	    break;
    }


    return 0;
}


/* Add two numbers. */
float add(int n1, float n2)
{
    float sum;

    sum = n1 + n2;

    return sum;
}


/* Sum of digits of a number. */
void sumOfDigits(int num)
{
    int sum = 0;

    /* If num is negative make it positive. */
    if (num < 0)
    {
        num = num * (-1);
    }

    while (num != 0)
    {
        sum = sum + (num % 10);
	num = num / 10;
    }

    printf("Sum of digits: %d\n", sum);
}


/* Function definition. */
unsigned int fact(int num)
{
    unsigned int factorial = 1;
    int i;


    for (i = 1; i <= num; i++)
    {
        factorial *= i;
    }

    return factorial;
}


/* Check if a number is prime. */
void check_prime(int num)
{
    int i; 

    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
	{
	    break;
	}
    }

    if (i == num)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not a prime\n");
    }
}

