#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calOT
//
// Purpose: Calculates the total overtime wages. Receives input
// from the calling function and returns the product of the
// overtime hours worked, the employees wage, and the overtime
// rate.
//
// Parameters:
//          overtimeHours   - The total overtime hours worked
//          wageRate        - The employee base rate
//
//
// Returns: overtimePay     - overtime pay based on OVERTIME_RATE
//
//**************************************************************


float calcOT (float overtimeHours, float wageRate) {

    float overtimePay; /* total overtime pay */

    /* calculate the total overtime pay based on the OVERTIME_RATE */
    overtimePay = overtimeHours * wageRate * OVERTIME_RATE;

    /* return overtimePay back to the calling function */
    return overtimePay;

}