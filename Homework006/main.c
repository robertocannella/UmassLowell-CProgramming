//********************************************************
//
// Assignment 6 - Structures
//
// Name: Roberto Cannella
//
// Class: C Programming, Spring 2023
//
// Date: 2023-March-05
//
// Description: This program prompts the user for the number of hours
// worked for each employee. It then calculates gross pay
//        ** including overtime and displays the results in table. Functions
//        ** and structures are used.
//
// Call by Value and Reference design
//
//********************************************************

#include <stdio.h>
#include "employees.h"


int main()
{

    /* Variable Declarations */

    /* Set up a local variable to store the employee information */
    struct employee employeeData[NUM_EMPL] = {
            { .clockNumber = 98401,     .wageRate = 10.60,  .hireDate = {12,28,1995 } },
            { .clockNumber = 526488,    .wageRate = 9.75,   .hireDate = {9,28,2004  } },
            { .clockNumber = 765349,    .wageRate = 10.50,  .hireDate = {1,11,2009  } }, /* initialize clock and wage values */
            { .clockNumber = 34645,     .wageRate = 12.25,  .hireDate = {10,12,2010 } },
            { .clockNumber = 127615,    .wageRate = 8.35,   .hireDate = {3,4,2012   } }
    };
    float           totals [NUM_EMPL] = {};             /* Array to hold the totals of all employees*/

    /* print the program header */
    printProgramHeader();

    /* process each employee */
    for (int i = 0; i < NUM_EMPL; ++i){

        /* Read in the hours for an employee */
        employeeData[i].hours = getHours (employeeData[i].clockNumber);

        /* Calculate the base pay */
        employeeData[i].basePay = calcBasePay(  employeeData[i].hours, employeeData[i].wageRate);

        /* Calculate overtime hours */
        employeeData[i].overtimeHours = calcOTHours( employeeData[i].hours);

        /* Calculate the overtime pay */
        employeeData[i].overtimePay = calcOT(employeeData[i].overtimeHours,employeeData[i].wageRate);

        /* Calculate the gross pay */
        employeeData[i].grossPay = calcGross(employeeData[i].basePay, employeeData[i].overtimePay);

        /* Update the totals */
        updateTotals( totals,
                      employeeData[i].wageRate,
                      employeeData[i].hours,
                      employeeData[i].overtimeHours,
                      employeeData[i].grossPay);
    }

    /* Print the table header */
    printTableWithHireDate();


    /* Print all the employees - call by value and reference */
    printEmployeeData(employeeData, totals, NUM_EMPL);

    return (0);

}
