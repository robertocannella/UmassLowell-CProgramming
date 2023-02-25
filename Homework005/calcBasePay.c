#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calcBasePay
//
// Purpose: Performs calculations based on base wages for a
// standard work week. Receives input from the calling function
// and returns the results of a ternary operation.
//
// Parameters:
//          hours       - The total hours worked
//          wageRate    - The standard rate for the employee
//
// Returns: float       - Standard hours * Hours worked
//
//**************************************************************

float calcBasePay (float hours, float wageRate){

    /* return the calculated base pay, omitting any overtime hours */
    return (hours>STD_HOURS) ? STD_HOURS * wageRate : hours * wageRate;

}