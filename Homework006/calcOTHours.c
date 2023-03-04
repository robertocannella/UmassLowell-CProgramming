#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: calcOTHours
//
// Purpose: Calculate the number of overtime hours worked. Receives
// input from the calling function. Determines if the total hours are
// more that the STD_HOURS amount. Returns the total overtime hours
// worked, even if there are 0.
//
// Parameters:  hours           - The total hours worked
//
// Returns:     overtimeHours   - The difference between the STD_HOURS
//                                and the actual hours worked
//
//**************************************************************

float calcOTHours (float hours){

    float overtimeHours; /* total overtime hours worked */

    /* logic to calculate overtime hours */
    if (hours > STD_HOURS){                     /* Did the employee work more than STD_HOURS?   */

         overtimeHours = hours - STD_HOURS ;    /* YES, calculate overtime                      */

    }else {
         overtimeHours = 0;                     /* NO, set overtime to 0                        */
    }

    /* return overtimeHours back to the calling function */
    return (overtimeHours);

}