#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calOT
//
// Purpose: Calculates the total overtime wages.
//
// Parameters:
//        overtimeHours - The total overtime hours worked
//        wageRate      - The employee base rate
//
//
// Returns: hoursWorked - hours worked in a given week
//
//**************************************************************


float calcOT (float overtimeHours, float wageRate) {

    float overtimePay;

    overtimePay = overtimeHours * wageRate * OVERTIME_RATE;


    return overtimePay;

}