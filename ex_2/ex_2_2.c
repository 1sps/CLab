/*
 * ex_2_2.c:
 *
 * Question:
 * =========
 *
 * A program to illustrate prefix increment operator .
 *
 * Note that this example in lab manual invodes undefined behavior. See comments
 * in notes below.
 *
 * TODO: Make sure Note is complete.
 *
 */

#include<stdio.h>
/*
#include<conio.h>
*/

void main()
{
    int x=5, v;


    /* Use prefix increment operator in an arithmetic expression. */
    v = ++x * ++x + ++x;

    /* Note
     * ====
     *
     * Above code invokes *undefined* behavior. If you are using latest gcc
     * compiler use the -Wsequence-point option while compiling. Then you will
     * see the compiler warning too.
     *
     * It seems C does not allow using increment/decrement operator more than
     * once in same variable in same C statement.
     *
     * Which means below code also invokes undefined behavior.
     *
     * x = 5;
     * v = ++x + ++x;
     *
     * Similarly any of the expressions below also invokes undefined behavior.
     *
     * v = ++x + ++x;
     * 
     * v = x++ + x++;
     *
     * v = ++x + x++;
     *
     * printf("%d %d %d", ++x, ++x, ++x) ;
     *
     * -------------------------------------------------------------------
     * Undefined behavior means we cannot predict what will be the output.
     * -------------------------------------------------------------------
     *
     * To know more about undefined behavior in C, a nice explaination is given
     * in below link:
     *
     *
     * Note, however, below code is fine.
     *
     * x=5, y=6;
     * v = x++ + ++y
     * printf("%d", v);
     *
     * And will print 12;
     *
     * But below code invokes undefined behavior.
     *
     * x=5, y=6;
     * printf("%d %d", x+y, y++);
     *
     * gcc gives same warning for code above.
     *
     * So in C, we cannot use same vairbale again in any arithmetic expression
     * in same statement if we have already used increment/decrement operator in
     * that variable once.
     *
     */

    /* Display values of v and x */
    printf("v=%d, x=%d\n", v, x);

    /*
    getch();
    */
}

