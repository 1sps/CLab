/*
 * ex_12_2.c:
 *
 * Question
 * ========
 *
 * Write a program to read words from the user untill user enters 'NO' and write
 * them to a file if the word is vowel free. Display the content of the file.
 *
 */

#include<stdio.h>
#include<string.h>

/* Function prototype declaration. */
int isVowelFree(char *word);


int  main()
{
    char word[100];
    int ch, more;

    /* File pointer. */
    FILE *fptr;


    printf("---\nProgram Start!\n---\n");

    /* Open the file to write.*/
    fptr = fopen("words.txt", "w");

    /* Get words from user continuously. Write word to file only if it is
     * vowel free.
     */
    do
    {
        printf("Word: ");
	scanf("%s", word);

	if (isVowelFree(word) == 1)
	{
	    /*
	     * Write word to file.
	     */
	    fputs(word, fptr);
	    fputs("\n", fptr);
	}

	printf("Continue ? [y/n]: ");

	/* We need this extra getchar because trailing \n will be there in
	 * input.
	 */
	getchar();

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

    printf("---\nFile: words.txt\n---\n");

    /* Open the file to read.*/
    fptr = fopen("words.txt", "r");

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


/*
 * Check if a string is vowel free.
 *
 * Return: 1 if string is vowel free
 *         0 is string contains vowel
 *
 */
int isVowelFree(char *word)
{
    int isFree = 1;

    while (*word != '\0')
    {
        if ( *word == 'a' || *word == 'e' ||
	     *word == 'i' || *word == 'o' ||
	     *word == 'u'
	   )
	{
	    isFree = 0;
	    break;
	}

	word++;
    }

    return isFree;
}
