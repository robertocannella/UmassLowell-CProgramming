#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calcGross
//
// Purpose: Calculate the gross employee pay base on input from
// the calling function. Returns simple addition of the input.
//
// Parameters:
//          basePay         - The employee's base wages
//          overtimePay     - The employee's overtime wages
//
// Returns: float           - Gross wages (regular + overtime)
//
//**************************************************************

float calcGross (float basePay, float overtimePay)
{

    /* return the sum of base and overtime pay to the calling function*/
    return (basePay + overtimePay);

}