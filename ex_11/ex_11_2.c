/*
 * ex_11_2.c:
 *
 * Question
 * ========
 *
 * Create a structure employee containing name as character string, telephone
 * as a character string and salary as integer. Input records of 10 employees.
 * After that, display the name, telephone and salary of the employees with
 * highest salary and lowest salary and display the average salary of all 10
 * employees.
 *
 */

#include<stdio.h>

struct employee
{
    char name[100];
    char telephone[20];
    int salary;
};


int main()
{
    /* Create an array having struct employee as datatype. */
    struct employee e[10];

    /* Index of highest salary. */
    int hIdx;

    /* Index of lowest salary. */
    int lIdx;

    int i, sum = 0;

    float avg;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    for (i = 0; i < 10; i++)
    {
        printf("Employee no: %d\n", i+1);

	printf("Name: ");
	scanf("%s", e[i].name);

	printf("telephone: ");
	scanf("%s", e[i].telephone);

	printf("Salary: ");
	scanf("%d", &e[i].salary);

	printf("\n");
    }


    /*
     * Find employee with highest and lowest salary.
     * Also Calculate the sum of salary of all employees.
     *
     */
    hIdx = lIdx = 0;
    for (i = 0; i < 10; i++)
    {
        if (e[i].salary > e[hIdx].salary)
	{
	    hIdx = i;
	}

        if (e[i].salary < e[lIdx].salary)
	{
	    lIdx = i;
	}

	sum += e[i].salary;
    }

    /* Calculate average of all salary. */
    avg = (float) sum / 10;


    /* Display result. */
    printf("---\nHighest Salary Employee\n---\n");
    printf("Name: %s\n", e[hIdx].name);
    printf("Telephone: %s\n", e[hIdx].telephone);
    printf("Salary: %d\n", e[hIdx].salary);

    printf("---\nLowest Salary Employee\n---\n");
    printf("Name: %s\n", e[lIdx].name);
    printf("Telephone: %s\n", e[lIdx].telephone);
    printf("Salary: %d\n", e[lIdx].salary);

    printf("---\nAverage salary: %f\n", avg);


    return 0;
}

