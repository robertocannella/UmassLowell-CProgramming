#include <stdio.h>
#include "employees.h"

//************************************************************* 
// Function: printEmp 
// 
// Purpose: Prints out all the employee information in a
// nice and orderly table format.
// 
// Parameters: 
//
//     clockNumber - Array of employee clock numbers
//     wageRate - Array of employee wages per hour
//     hours - Array of number of hours worked by an employee
//     overtimeHours - Array of overtime hours for each employee
//     grossPay - Array of gross pay calculations for each employee
//     totals - Array of values which tally up the totals of each column
//     size - Number of employees to process 
// 
// Returns: Nothing (call by reference)
//  
//**************************************************************

void printEmp (long int clockNumber[], float wageRate[], float hours[],
               float overtimeHours[], float grossPay[], float totals[], int size)
{


    // Now that we have all the information in our arrays, we can
    // access each employee and print to screen
    for (int count = 0; count < size; count++)
    {
        // Print employee information from your arrays
        printf("\t    %06li %12.2f %12.1f %12.1f %12.2f\n", clockNumber[count], wageRate[count], hours[count], overtimeHours[count], grossPay[count]);
    }

    // Print Totals
    printf("\t------------------------------------------------------------------\n");
    printf("\t    Totals %12.2f %12.1f %12.1f %12.2f   \n",totals[1],totals[2],totals[3],totals[4]);

    // Print Averages
    printf("\t------------------------------------------------------------------\n");
    printf("\t  Averages %12.2f %12.1f %12.1f %12.2f   \n",totals[1]/size,totals[2]/size,totals[3]/size,totals[4]/size);


}