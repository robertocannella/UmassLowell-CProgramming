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

void printHeader (void){

    /* print the table header */
    printf ("\n\n*** Pay Calculator ***\n");

    // Print a nice table header
    printf("\n\n");
    printf("\t                 *** Pay Calculator Report ***                    \n");
    printf("\t------------------------------------------------------------------\n");
    printf("\t    Clock #        Wage     Tot Hours     OT Hours    Gross Pay   \n");
    printf("\t------------------------------------------------------------------\n");

}

//**************************************************************
// Function: printProgramHeader
//
// Purpose: Prints the initial program information.
//
// Parameters: none
//
// Returns: void
//
//**************************************************************

void printProgramHeader (){

    /* print the program header */
    printf ("\t\t*** Pay Calculator ***\n");

}

//**************************************************************
// Function: printTableHeader
//
// Purpose: Prints the initial table header.
//
// Parameters: none
//
// Returns: void
//
//**************************************************************

void printTableHeader() {

    // Print a formatted table header
    printf("\n\n");
    printf("\t                 *** Pay Calculator Report ***                    \n");
    printf("\t------------------------------------------------------------------\n");
    printf("\t    Clock #        Wage     Tot Hours     OT Hours    Gross Pay   \n");
    printf("\t------------------------------------------------------------------\n");

}
