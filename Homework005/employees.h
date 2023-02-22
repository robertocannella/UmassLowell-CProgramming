/* employees.h - common constants, types, and function prototypes */

/* constants */
#define NUM_EMPL 5
#define OVERTIME_RATE 1.5f
#define STD_WORK_WEEK 40.0f

/* types */

/* function prototypes */
float getHours (long int clockNumber);
void printHeader (void);
void printEmp  (long int clockNumber[], float wageRate[], float hours[],
                float overtimeHrs[], float grossPay[], int size);


/* add other functions prototypes here */