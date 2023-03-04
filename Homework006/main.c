//********************************************************
//
// Assignment 5 - Functions
//
// Name: Roberto Cannella
//
// Class: C Programming, Spring 2023
//
// Date: 2023-February-26
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
    float       basePay [NUM_EMPL];             // normal weekly pay without any overtime
    long  int   clockNumber[NUM_EMPL] = {98401,526488,765349,34645,127615}; /* ID */
    float       grossPay [NUM_EMPL];            // weekly gross pay - normal pay + overtime pay
    float       hours [NUM_EMPL];               // hours worked in a given week
    float       overtimeHours[NUM_EMPL] = {};   // overtime hours worked in a given week
    float       overtimePay [NUM_EMPL]  = {};   // overtime pay for a given week
    float       totals [NUM_EMPL]       = {};   // totals of each column
    float       wageRate [NUM_EMPL] = {10.60, 9.75, 10.5, 12.25, 8.35}; /* rate */

    /* print the program header */
    printProgramHeader();

    /* process each employee */
    for (int i = 0; i < NUM_EMPL; ++i){

        /* Read in the hours for an employee */
        hours[i] = getHours (clockNumber[i]);

        /* Calculate the base pay */
        basePay[i] = calcBasePay(hours[i], wageRate[i]);

        /* Calculate overtime hours */
        overtimeHours[i] = calcOTHours(hours[i]);

        /* Calculate the overtime pay */
        overtimePay[i] = calcOT(overtimeHours[i],wageRate[i]);

        /* Calculate the gross pay */
        grossPay[i] = calcGross(basePay[i], overtimePay[i]);

        /* Update the totals */
        updateTotals( totals, wageRate[i],hours[i],overtimeHours[i],grossPay[i]);
    }

    /* Print the table header */
    printTableHeader();

    /* Print all the employees - call by reference */
    printEmp (clockNumber, wageRate, hours,
              overtimeHours, grossPay,totals, NUM_EMPL);

    return (0);

}
