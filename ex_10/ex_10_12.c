/*
 * ex_10_12.c:
 *
 * Question:
 * =========
 *
 * Write a program to do the following:
 *
 * -- To print the question "Who was the first president of Nepal ?".
 *  
 * -- To accept the answer
 *  
 * -- To type "Good" and stop if the answer is correct.
 *  
 * -- To print the message "Try again" if the answer is wrong. 
 *  
 * -- To display the correct answer when the answer is wrong even at the third
 *    attempt and stop.
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>


int main()
{
    char answer[100];
    char correctAnswer[] = "Ram baran yadav" ;

    int i, incorrect = 1;


    printf("---\nProgram Start\n---\n");
    printf("\n\nThis is a Quiz !\n\n");


    printf("Question: Who was the first president of Nepal?\n\n");

    /*
     * Repeat untill the answer is incorrect, but only for a maximum of three
     * times.
     */

    i = 0;
    do
    {
	if (incorrect == 1 && i > 0)
	{
	    printf("Try Again.\n\n");
	}

	printf("(attempt %d) Answer: ", i+1);
        fgets(answer, 100, stdin);

	/* Needed to remove trailing \n which fgets reads. */
	answer[strlen(answer)-1] = 0;

	/* Check if user answered correctly. */
	if (strcmp(answer, correctAnswer) == 0)
	{
	    incorrect = 0;
            printf("Good!\n");
	}
	i++;
    } while ((i != 3) && (incorrect == 1));


    /* Tell correct answer if user failed! */
    if (incorrect == 1)
    {
	printf("\n\nFail!\n");
        printf("Answer: %s\n", correctAnswer);
    }


    getchar();
    return 0;
}

