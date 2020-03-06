/*
 * ex_11_1.c:
 *
 * Question
 * ========
 *
 * Write a program to create a structure having members: Name, Address,
 * Telephone number and Salary of an employee. Read the values of the members
 * from the user and display.
 *
 */

#include<stdio.h>

struct employee
{
    char name[100];
    char address[100];
    char telephone[20];
    int salary;
};


int main()
{
    /* Create a variable having struct employee as datatype. */
    struct employee e;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    printf("Name: ");
    scanf("%s", e.name);
    printf("Address: ");
    scanf("%s", e.address);
    printf("Telephone: ");
    scanf("%s", e.telephone);
    printf("Salary: ");
    scanf("%d", &e.salary);


    /* Display the value that user entered. */
    printf("---\nYou entered\n---\n");

    printf("Name: %s\n", e.name);
    printf("Address: %s\n", e.address);
    printf("Telephone: %s\n", e.telephone);
    printf("Salary: %d\n", e.salary);


    return 0;
}

