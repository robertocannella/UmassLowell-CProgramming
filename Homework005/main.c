//********************************************************
//
// Assignment 5 - Functions
//
// Name: <replace with your name>
//
// Class: C Programming, <replace with Semester and Year>
//
// Date: <replace with the current date>
//
// Description: Program which determines overtime and
// gross pay for a set of employees with outputs sent
// to standard output (the screen).
//
// Functions called by a combination of by value and by
// reference.
//
//********************************************************

#include <stdio.h>
#include "employees.h"

int main()
{

    /* Variable Declarations */

    long  int clockNumber[NUM_EMPL] = {98401,526488,765349,34645,127615}; /* ID */
    float grossPay[NUM_EMPL];     /* gross pay */
    float hours[NUM_EMPL];        /* hours worked in a given week */
    int   i;                      /* loop and array index */
    float overtimeHrs[NUM_EMPL];  /* overtime hours */
    float wageRate[NUM_EMPL] = {10.60,9.75,10.50,12.25,8.35}; /* hourly wage rate */

    /* process each employee */
    for (i = 0; i < NUM_EMPL; ++i)
    {

        /* Read in the hours for an employee */
        hours[i] = getHours (clockNumber[i]);

        /* TODO: Function call to calculate overtime */

        /* TODO: Function call to calculate gross pay */

    }

    /* Print the header info */
    printHeader();

    /* Print all the employees - call by reference */
    printEmp (clockNumber, wageRate, hours,
              overtimeHrs, grossPay, NUM_EMPL);

    return (0);

}
