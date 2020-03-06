/*
 * ex_4_9.c:
 *
 * Question:
 * =========
 *
 * Write a program that asks an arithmetic operator and two operands and
 * performs the corresponding operation on the operands.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    char operator;
    float num1, num2, result;

    /* Should be set to 0 if user gives invalid operator. */
    int valid = 1;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("Operator can be +, -, * or /\n");
    printf("Operator: ");
    operator = getchar();

    printf("Enter two operands (numbers): ");
    scanf("%f%f", &num1, &num2);

    /* Perform operation based on operator. */
    switch(operator)
    {
        case '+':
	    result = num1 + num2;
	    break;
        case '-':
	    result = num1 - num2;
	    break;
        case '*':
	    result = num1 * num2;
	    break;
        case '/':
	    result = num1 / num2;
	    break;
        default:
	    /* Make a note that user gave invalid operator. */
	    valid = 0;

	    /* If invalid operator print appropriate message. */
	    printf("Sorry. Invalid operator: %c\n", operator);
    }


    /* Display result only if operator was valid. */
    if (valid == 1)
    {
        printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);
    }

    /*
    getch();
    */

    return 0;
}

