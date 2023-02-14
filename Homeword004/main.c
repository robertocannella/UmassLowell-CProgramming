//*******************************************************
//
// Assignment 4 - Arrays
//
// Name: Roberto Cannella
//
// Class: C Programming, Spring 2023
//
// Date: 2023-02-19
//
// Description: Program which determines overtime and 
// gross pay for a set of employees with outputs sent 
// to standard output (the screen).
//
//********************************************************

#include <stdio.h>

#define SIZE        5           // number of employees to process
#define STD_HOURS   40.0        // normal work week hours before overtime
#define OT_RATE     1.5         // time and half overtime setting

int main()
{

    // unique employee identifier
    long int    clock [SIZE] = {98401, 526488, 765349, 34645, 127615};

    float       hours [SIZE];               // hours worked in a given week
    float       grossPay [SIZE];            // weekly gross pay - normal pay + overtime pay
    float       normalPay [SIZE];           // normal weekly pay without any overtime
    float       overtimeHours[SIZE] = {};   // overtime hours worked in a given week
    float       overtimePay [SIZE]  = {};   // overtime pay for a given week
    float       totals [SIZE]       = {};   // totals of each column

    // hourly pay for each employee
    float       wage [SIZE] = {10.6, 9.75, 10.5, 12.25, 8.35};

    printf ("\n*** Pay Calculator ***\n\n");

    // Process each employee one at a time
    for (int count = 0; count < SIZE; count++)
    {

        // Prompt and Read in hours worked for employee
        printf("\nEnter the number of hours for employee #%06li: ", clock[count]);
        scanf("%f", &hours[count]);     // Store into hours[]

        // Calculate overtime and gross pay for employee
        if (hours[count] >= STD_HOURS){
            overtimeHours[count]    = hours[count] - STD_HOURS;
            // Calculate arrays normalPay and overtimePay with overtime
            normalPay[count]        = STD_HOURS * wage[count];
            overtimePay[count]      = OT_RATE * overtimeHours[count] * wage[count];
        }
        else {
            // Calculate arrays normalPay and overtimePay without overtime
            normalPay[count]        = hours[count] * wage[count];
        }

        // Calculate Gross Pay
        grossPay[count] = normalPay[count] + overtimePay[count];

        // Tally up columns
        totals[1] += wage[count];
        totals[2] += hours[count];
        totals[3] += overtimeHours[count];
        totals[4] += grossPay[count];
    }

    // Print a nice table header
    printf("\n\n");
    printf("\t                 *** Pay Calculator Report ***                    \n");
    printf("\t------------------------------------------------------------------\n");
    printf("\t    Clock #        Wage     Tot Hours     OT Hours    Gross Pay    \n");
    printf("\t------------------------------------------------------------------\n");

    // Now that we have all the information in our arrays, we can
    // Access each employee and print to screen or file
    for (int count = 0; count < SIZE; count++)
    {
        // TODO: Print employee information from your arrays
        printf("\t    %06li %12.2f %12.1f %12.1f %12.2f\n", clock[count], wage[count], hours[count], overtimeHours[count], grossPay[count]);
    }

    // Print Totals
    printf("\t------------------------------------------------------------------\n");
    printf("\t    Totals %12.2f %12.1f %12.1f %12.2f   \n",totals[1],totals[2],totals[3],totals[4]);
    printf("\t------------------------------------------------------------------\n");

    // Print Averages
    printf("\t  Averages %12.2f %12.1f %12.1f %12.2f   \n",totals[1]/SIZE,totals[2]/SIZE,totals[3]/SIZE,totals[4]/SIZE);
    printf("\t------------------------------------------------------------------\n");
    return(0);
}