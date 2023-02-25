#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calcBasePay
//
// Purpose: Calculate the base wages for a standard work week.
//
// Parameters: hours - The total hours worked
//
// Returns: basePay - Standard hours * Hours worked
//
//**************************************************************

float calcBasePay (float hours, float wageRate)
{

    float basePay;

    if (hours > STD_HOURS){

        basePay = STD_HOURS * wageRate;

    }else {
        basePay = hours * wageRate ;
    }

    /* return standard pay back to the calling function */
    return (basePay);
}