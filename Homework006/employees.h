/* employees.h - common constants, types, and function prototypes */

/* constants */
#include "date.h"

#define NUM_EMPL            5           // number of employees to process
#define OVERTIME_RATE       1.5         // time and half overtime setting
#define STD_HOURS           40.0        // normal work week hours before overtime

/* types */
struct employee
{
    long int clockNumber;
    float basePay;
    float wageRate;
    float hours;
    float overtimeHours;
    float overtimePay;
    float grossPay;
    struct date hireDate;
};


/* function prototypes */
float   calcOT (float hours, float wageRate);
float   calcOTHours (float hours);
float   calcBasePay (float hours, float wageRate);
float   calcGross (float basePay, float overtimePay);
float   getHours (long int clockNumber);
void    printHeader (void);
void    printProgramHeader (void);
void    printTableHeader (void);
void    printTableWithHireDate (void);
void    printEmp  (long int clockNumber[], float wageRate[], float hours[],
                    float overtimeHrs[], float grossPay[], float totals[], int size);
void    printEmployeeData (struct employee[], float totals[], int size);
void    updateTotals (float* totals, float wage, float hours, float overtimeHours, float gross);
