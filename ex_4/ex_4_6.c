/*
 * ex_3_6.c:
 *
 * Question:
 * =========
 *
 * Write a program to determine all roots of a quadratic equation:
 *
 * a*(x^2) + b*x + c = 0
 *
 * Read the values of a, b and c from user.
 *
 */

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c;

    /* Descriminant */
    float dsc;

    /* Roots */
    float root1, root2;

    /* Real and imaginary part of complex number roots */
    float rootR, rootI;

    /* Get input from user. */
    printf("---\nProgram Start\n---\n");
    printf("Enter a, b, c : ");
    scanf("%f%f%f", &a, &b, &c);


    /* Calculate descriminant. */
    dsc = (b*b) - (4*a*c);

    /*
     * Depending on the value of descriminant there will different types of roots
     * of the quadratic equation.
     */
    if (dsc >= 0)
    {
	/*
	 * When descriminant is non negative then roots are real numbers.
	 */
        printf("Roots are real numbers\n");

	root1 = ( -b + sqrt(dsc) ) / (2*a);
	root2 = ( -b - sqrt(dsc) ) / (2*a);

	/* If descriminant is 0 both roots are equal. */
	if (dsc == 0)
	{
	    printf("Both roots are equal\n");
	}

	printf("Root1 = %.2f\nRoot2 = %.2f\n", root1, root2);

    }
    else
    {
	/*
	 * When descriminant is negative then roots are imaginary numbers.
	 */
	printf("Roots are imaginary numbers\n");

	/* Calculate real part. */
	rootR = -b / (2*a);

	/*
	 * Calculate imaginary part.
	 * 
	 * Note we take the absolute (positive) value of descriminant
	 * to calculate the square root.
	 */
	rootI = sqrt(-dsc) / (2*a);

	/* Display complex roots. */
	printf("Root1 = %.2f + %.2fi\n", rootR, rootI);
	printf("Root2 = %.2f - %.2fi\n", rootR, rootI);
    }


    getchar();

    return 0;
}

