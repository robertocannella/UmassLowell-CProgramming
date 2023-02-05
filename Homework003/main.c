//*******************************************************
//
//   Homework: 3
//
//   Name: Roberto Cannella
//
//   Class: C Programming, Spring 2023
//
//   Date: 02/12/2023
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
    int clockNum;              /*  employee clock number             */
    float grossPay;            /*  gross pay for week (wage * hours) */
    float hours;               /*  number of hours worked per week   */
    int numEntries;            /*  number of entries to process      */
    FILE *outputfileptr;       /*  pointer to the output file        */
    float wage;                /*  hourly wage                       */

    /* open a file called /tmp/home2.txt */
    if ((outputfileptr = fopen("/tmp/home2.txt", "w")) == (FILE *) NULL)
    {
        fprintf(stderr, "Error, Unable to open file\n");   /* stderr will print to the screen */
        exit(1);
    }

    /* print header information to the file */
    fprintf(outputfileptr, "\n\n\t----------------------------------------------------------\n");
    fprintf(outputfileptr, "\tClock # Wage Hours Gross\n");
    fprintf(outputfileptr, "\t----------------------------------------------------------\n");

    /* begin Pay Calculator */
    printf ("*** Pay Calculator ***\n");

    /* prompt user for total number of entries to process */
    printf("How many employees would you like to process? ");
    scanf("%d", &numEntries);

    for (int i = 0; i < numEntries; ++i) { /* begin gross pay loop */
        /* prompt for input values from the screen */
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
        printf("\nData added to file\n");

    }/* end gross pay loop */

    return (0); /* success */

} /* main */