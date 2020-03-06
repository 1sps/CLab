/*
 * ex_10_11.c:
 *
 * Question:
 * =========
 *
 * Write a program to read name of 10 students in main() pass the name list to a
 * function that sorts the array in ascending order. Display the sorted array
 * from main.
 *
 * TODO
 *
 */

#include<stdio.h>

/* Needed to use string helper functions. */
#include<string.h>


/* Function prototype declarations. */
void sortArrayOfNames(char [100]*names, int size);
void swap(char **names, int i, int j);


int main()
{
    /* Array of strings. */
    char names[10][100];
    //char **namesPtr;


    int i;



    /* Inpur 10 names. */
    for (i = 0; i < 10; i++)
    {
        printf("Name %d: ", i+1);
	fgets(names[i], 100, stdin);
    }

    /* Sort array of strings. */
    //namesPtr = names;
    sortArrayOfNames(names, 10);


    /* Diplay names in alphabetical order. */
    for (i = 0; i < 10; i++)
    {
        printf("%s\n", names[i]);
    }


    getchar();
    return 0;
}


/*
 * Sort array of strings.
 *
 * @names: pointer to array of strings.
 * @size:  total number of strings in the array.
 *
 * @return: void.
 *
 */
void sortArrayOfNames(char [100]*names, int size);
{

    int i, j;

    for (i = 1; i < size; i++)
    {
        j = i;
	while ( (j > 0) && (strcmp(names[j], names[j-1]) < 0) )
	{
	    swap(names, j, j-1);
	}
	j--;
    }
}

/* Swap names[i] and names[j]. */
void swap(char **names, int i, int j)
{
    char *temp;

    temp = names[i];
    names[i] = names[j];
    names[j] = temp;
}

