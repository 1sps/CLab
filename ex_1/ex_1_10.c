/*
 * ex_1_9.c:
 *
 * Write a program to read price of two pens and five copies of same type and
 * calculate the price after discounting 10%.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

int main()
{
    float penPrice, copyPrice;

    /* Total price before discount */
    float totalPrice;

    /* Discount amount */
    float discount;

    /* Total price after discount */
    float finalPrice;


    /* Get price of a pen and copy from user. */
    printf("--Enter below information--\n");
    printf("Pen price: ");
    scanf("%f", &penPrice);
    printf("Copy price: ");
    scanf("%f", &copyPrice);

    /* Calculate total price. */
    totalPrice = (2 * penPrice) + (5 * copyPrice);

    /* Calculate discount. */
    discount = (10.0 / 100) * totalPrice;

    /* Calculate price after discount. */
    finalPrice = totalPrice - discount;

    /* Display result */
    printf("----------------\n");
    printf("Bill\n");
    printf("----------------\n");

    printf("Pen: Rate: %.2f Quantity 2\n", penPrice);
    printf("Copy: Rate: %.2f Quantity 5\n", copyPrice);
    printf("Total: %.2f\n", totalPrice);
    printf("Discount: %.2f\n", discount);
    printf("Final price: %.2f\n", finalPrice);

    /*
    getch();
    */

    return 0;
}

