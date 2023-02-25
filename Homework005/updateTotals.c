#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: updateTotals
//
// Purpose: Updates the totals for each column. Receives a totals array
// as a reference and subsequently performs calculations on it base on
// values passed in by the calling function.
//
// Parameters:
//      totals          - A reference to an array holding cumulative totals
//      wage            - The current employee's base wage
//      hours           - The current employee's regular hours
//      overtimeHours   - The current employee's overtime ours
//      gross           - The current employee's gross hours
//
// Returns: void
//
//**************************************************************

void updateTotals (  float *totals, float wage, float hours, float overtimeHours, float gross)
{
    // Tally up each column and update the value in the array.
    totals[1] += wage;
    totals[2] += hours;
    totals[3] += overtimeHours;
    totals[4] += gross;

}