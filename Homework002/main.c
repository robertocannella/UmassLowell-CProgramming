//*******************************************************
//
//   Homework: 2
//
//   Name: Roberto Cannella
//
//   Class: C Programming, Spring 2023
//
//   Date: 02/05/23
//
//   Description: Program which determines gross pay
//   and outputs are sent to a designated file.
//
//
//********************************************************

#include <stdio.h>
#include <stdlib.h>

int main ( )
{
    int numEntries;            /* number of entries to process */
    int clockNum;              /* employee clock number */
    float grossPay;            /* gross pay for week (wage * hours) */
    float hours;               /* number of hours worked per week */
    FILE *outputfileptr;       /* pointer to the output file */
    float wage;                /* hourly wage */

    /* open a file called /tmp/home2.txt */
    if ((outputfileptr = fopen("/tmp/home2.txt", "w")) == (FILE *) NULL)
    {
        fprintf(stderr, "Error, Unable to open file\n");   /* stderr will print to the screen */
        exit(1);
    }

    /* print out header information to a file */
    fprintf(outputfileptr, "\n\n\t----------------------------------------------------------\n");
    fprintf(outputfileptr, "\tClock # Wage Hours Gross\n");
    fprintf(outputfileptr, "\t----------------------------------------------------------\n");

    /* begin Pay Calculator*/
    printf ("*** Pay Calculator ***\n");


    /* ADD YOUR PROMPT and LOOP CODE HERE */
    printf("How many employees do would you like to process: ");
    scanf("%d", &numEntries);

    for (int i = 0; i < numEntries; ++i) {
        /* Prompt for input values from the screen */
        printf("\nEnter clock number for employee: ");
        scanf("%d", &clockNum);
        printf("\nEnter hourly wage for employee: ");
        scanf("%f", &wage);
        printf("\nEnter the number of hours the employee worked: ");
        scanf("%f", &hours);


        /* calculate gross pay */
        grossPay = wage * hours;


        /* print out data for current employee to the file */
        fprintf(outputfileptr, "\t%06i %5.2f %5.1f %7.2f\n", clockNum, wage, hours, grossPay);
        printf("Data added to file");


    }/* END YOUR LOOP HERE */

    return (0); /* success */

} /* main */