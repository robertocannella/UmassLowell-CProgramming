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
//   Description: Program which determines gross pay,
//   including overtime. Outputs are sent to a
//   designated file.
//
//
//********************************************************

#include <stdio.h>
#include <stdlib.h>

#define     NUMBER_ENTRIES      5       /* number of entries to process                     */
#define     OVERTIME_RATE       1.5     /* rate of overtime pay                             */
#define     STD_HOURS           40.0    /* base hours                                       */

int main ( )
{
    int     clockNum;                   /*  employee clock number                           */
    float   grossPay;                   /*  gross pay for week (wage * hours)               */
    float   hours;                      /*  number of hours worked per week                 */
    FILE    *outputfileptr;             /*  pointer to the output file                      */
    float   overtimeHours;              /*  hours above STD_HOURS                           */
    float   overtimePay;                /*  overtime pay (wage * OVERTIME_RATE * OT hours   */
    float   wage;                       /*  hourly wage                                     */

    /* open a file called /tmp/home2.txt */
    if ((outputfileptr = fopen("/tmp/home2.txt", "w")) == (FILE *) NULL){
        fprintf(stderr, "Error, Unable to open file\n");   /* stderr will print to the screen */
        exit(1);
    }

    /* print header information to the file */
    fprintf(outputfileptr, "\n\n");
    fprintf(outputfileptr, "\t----------------------------------------------------------\n");
    fprintf(outputfileptr, "\tClock #        Wage        Hours           OT        Gross\n");
    fprintf(outputfileptr, "\t----------------------------------------------------------\n");

    /* begin Pay Calculator */
    printf ("*** Pay Calculator ***\n");

    for (int i = 0; i < NUMBER_ENTRIES; ++i) { /* begin gross pay loop */

        /* prompt for input values from the screen */
        printf("\nEnter clock number for employee: ");
        scanf("%d", &clockNum);
        printf("\nEnter hourly wage for employee: ");
        scanf("%f", &wage);
        printf("\nEnter the number of hours the employee worked: ");
        scanf("%f", &hours);

        /* check for overtime hours */
        overtimeHours = 0;
        if (hours >= STD_HOURS){
            overtimeHours = hours - STD_HOURS;
            hours = STD_HOURS;
        }

        /* calculate gross pay */
        grossPay = wage * hours;                                /* standard wages           */
        overtimePay = wage * OVERTIME_RATE * overtimeHours;     /* overtime wages           */
        grossPay += overtimePay;                                /* sum standard & ot wages  */

        /* print out data for current employee to the file */
        fprintf(outputfileptr, "\t%06i %12.2f %12.1f %12.1f %12.2f\n", clockNum, wage, (hours+overtimeHours), overtimeHours, grossPay);
        printf("\nData added to file\n");

    }/* end gross pay loop */

    return (0); /* success */

} /* main */