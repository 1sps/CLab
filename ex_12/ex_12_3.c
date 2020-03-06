/*
 * ex_12_3.c:
 *
 * Question
 * ========
 *
 * Write a program to open a new file, read roll number, name, address and
 * phone number of students until the user says "no" after reading the data,
 * write it to a file then display the content of a file.
 *
 */

#include<stdio.h>
#include<string.h>


int  main()
{
    char str[100];
    int roll;
    char rollStr[100];
    int ch, more;

    /* File pointer. */
    FILE *fptr;


    printf("---\nProgram Start!\n---\n");

    /* Open the file to write.*/
    fptr = fopen("students.txt", "w");

    /* Get words from user continuously. Write word to file only if it is
     * vowel free.
     */
    do
    {
	/* Input roll no and write to file */
        printf("Roll no: ");
	scanf("%d", &roll);
	/* Ignore trailing \n. */
	getchar();
	sprintf(rollStr, "%d", roll);
	fputs(rollStr, fptr);
	fputs("  ", fptr);

	/* Input name and write to file */
        printf("Name: ");
	fgets(str, 100, stdin);
	str[strlen(str)-1] = '\0';
	fputs(str, fptr);
	fputs("  ", fptr);

	/* Input address and write to file */
        printf("Address: ");
	fgets(str, 100, stdin);
	str[strlen(str)-1] = '\0';
	fputs(str, fptr);
	fputs("  ", fptr);

	/* Input telephone no and write to file */
        printf("Telephone: ");
	fgets(str, 100, stdin);
	str[strlen(str)-1] = '\0';
	fputs(str, fptr);
	fputs("\n", fptr);


	printf("Continue ? [y/n]: ");
	more = getchar();
    } while (more == 'y');

    /* Close file. */
    fclose(fptr);


    /*
     * Display content of file.
     *
     * For this we can print each character of the file to output.
     *
     */

    printf("---\nFile: students.txt\n---\n");

    /* Open the file to read.*/
    fptr = fopen("students.txt", "r");

    /* Read each character from file and print to output.*/
    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }

    /* Close file. */
    fclose(fptr);


    getchar();
    return 0;
}

