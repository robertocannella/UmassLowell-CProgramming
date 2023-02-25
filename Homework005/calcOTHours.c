#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calcOTHours
//
// Purpose: Calculate the number of overtime hours worked.
//
// Parameters: hours - The total hours worked
//
// Returns: overtimeHours - Standard hours * Hours worked
//
//**************************************************************

float calcOTHours (float hours)
{
    float overtimeHours;

    if (hours > STD_HOURS){

         overtimeHours = hours - STD_HOURS ;

    }else {
         overtimeHours = 0;
    }

    return (overtimeHours);
}