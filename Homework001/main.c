/************************************************************************/
/*                                                                      */
/*  HOMEWORK:   1 (Chapter 4)                                           */
/*                                                                      */
/*  Name:  Roberto Cannella                                             */
/*                                                                      */
/*  Class:  C Programming, Spring 2023                                  */
/*                                                                      */
/*  Date:  01/24/2023                                                   */
/*                                                                      */
/*  Description:  Program which determines gross pay and outputs        */
/*                a formatted answer.  The output of this program will  */
/*                be sent to a designated file.                         */
/*                                                                      */
/*                                                                      */
/************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   clock_num;            /* employee clock number             */
    float gross;                /* gross pay for week (wage * hours) */
    float hours;                /* number of hours worked per week   */
    FILE  *outputfileptr;       /* pointer to the output file        */
    float wage;                 /* hourly wage                       */

    /* open a file called home4.txt */
    if ((outputfileptr = fopen("/tmp/home4.txt", "w")) == (FILE *) NULL)
    {
        fprintf(stderr, "Error, Unable to open file\n");  /* stderr will print to the screen */
        exit(1);
    }

    /* Prompt for input values from the screen */
    printf ("This is a program to calculate gross pay.\n");
    printf ("You will be prompted for employee data.\n\n");
    printf ("Enter clock number for employee: ");
    scanf  ("%d", &clock_num);
    printf ("Enter weekly wage for employee: ");
    scanf  ("%f", &wage);
    printf ("Enter the number of hours the employee worked: ");
    scanf  ("%f", &hours);

    /* calculate gross pay */
    gross = wage * hours;

    /* print out employee information to a file */
    fprintf (outputfileptr, "\n\t\tTim Niesen, C Programming, First Homework Assignment\n\n\n");
    fprintf (outputfileptr, "\t----------------------------------------------------------\n");
    fprintf (outputfileptr, "\tClock #    Wage      Hours    Gross\n");
    fprintf (outputfileptr, "\t----------------------------------------------------------\n");
    fprintf (outputfileptr, "\t%06i     %5.2f    %5.1f    %7.2f\n",clock_num, wage, hours, gross);

    return (0); /* success */

} /* main */
