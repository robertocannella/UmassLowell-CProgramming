#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: updateTotals
//
// Purpose: Updates the totals for each column.
//
// Parameters:
//      totals      - Totals for each column
//      basePay     - The employee's base wages
//      overtimePay - The employee's overtime wages
//
//
// Returns: void
//
//**************************************************************

void updateTotals (  float *totals, float wage, float hours, float overtimeHours, float gross)
{
    // Tally up columns
    totals[1] += wage;
    totals[2] += hours;
    totals[3] += overtimeHours;
    totals[4] += gross;

}