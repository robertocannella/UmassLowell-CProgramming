/* employees.h - common constants, types, and function prototypes */

/* constants */
#define NUM_EMPL            5           // number of employees to process
#define OVERTIME_RATE       1.5         // time and half overtime setting
#define STD_HOURS           40.0        // normal work week hours before overtime

/* types */

/* function prototypes */
float getHours (long int clockNumber);
void printHeader (void);
void printEmp  (long int clockNumber[], float wageRate[], float hours[],
                float overtimeHrs[], float grossPay[], int size);


/* add other functions prototypes here */
