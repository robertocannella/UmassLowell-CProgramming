#include <stdio.h>
#include "employees.h"

//**************************************************************
// Function: printHeader
// 
// Purpose: Prints the initial table header information.
// 
// Parameters: none
// 
// Returns: void
//  
//**************************************************************

void printHeader (void) 
{ 

    printf ("\n\n*** Pay Calculator ***\n");

    /* print the table header */
    // Print a nice table header
    printf("\n\n");
    printf("\t                 *** Pay Calculator Report ***                    \n");
    printf("\t------------------------------------------------------------------\n");
    printf("\t    Clock #        Wage     Tot Hours     OT Hours    Gross Pay   \n");
    printf("\t------------------------------------------------------------------\n");

} 
