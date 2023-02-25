#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calcGross
//
// Purpose: Calculate the gross employee pay.
//
// Parameters:
//      basePay     - The employee's base wages
//      overtimePay - The employee's overtime wages
//
//
// Returns: overtimeHours - Standard hours * Hours worked
//
//**************************************************************

float calcGross (float basePay, float overtimePay)
{
    float grossWages;

    grossWages = basePay + overtimePay;

    return (grossWages);
}