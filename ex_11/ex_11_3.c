/*
 * ex_11_3.c:
 *
 * Question
 * ========
 *
 * Create a structure Date containing three members: int dd, int mm, int yy.
 * Create another structure person containing four member: name, address,
 * telephone and date of birth. For member date of birth, create an object of
 * structure date inside person. Using these structures, write a program to
 * input the records until the user enters 'n' or 'N'. Then, display the
 * contents in tabular form. 
 *
 */

#include<stdio.h>

struct date
{
    int dd;
    int mm;
    int yy;
};

struct person
{
    char name[100];
    char address[100];
    char telephone[20];

    /* See new datatype here. We can use it here because we have
     * (TODO) defined/declared it above.
     */
    struct date dob;
};


int main()
{
    /* Create an array of persons. */
    struct person p[100];

    char more;
    int i, total;


    printf("---\nProgram Start\n---\n");


    /* Get input from user. */
    i = 0;
    do
    {
        printf("Person no: %d\n", i+1);

	printf("Name: ");
	scanf("%s", p[i].name);

	printf("Address: ");
	scanf("%s", p[i].address);

	printf("Telephone: ");
	scanf("%s", p[i].telephone);

	printf("Date of birth [dd mm yyyy]: ");
	scanf("%d%d%d", &p[i].dob.dd, &p[i].dob.mm, &p[i].dob.yy);

	i++;

	printf("More ? [y/n]: ");

	/* Note a space before %c here. This is because there will be a \n
	 * character in input when user presses enter after typing date of
	 * birth.
	 */
	scanf(" %c", &more);

	printf("\n");
    } while(more != 'n' && more != 'N');

    total = i;


    /*
     * Print in tabular form.
     */

    /* Print heading of table. */
    printf("%-25s|%-25s|%-15s|%s\n", "Name", "Address", "Telephone", "DOB");
    for (i = 0; i < 70; i++)
    {
        putchar('-');
    }
    putchar('\n');

    /* Print rows of table. */
    for (i = 0; i < total; i++)
    {
	printf("%-25s|", p[i].name);
	printf("%-25s|", p[i].address);
	printf("%-15s|", p[i].telephone);
	printf("%02d-%02d-%d\n", p[i].dob.dd, p[i].dob.mm, p[i].dob.yy);
    }


    getchar();
    return 0;
}

