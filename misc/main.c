#include <stdio.h>
#include "numbers.h"




int main() {
    //runEvaluateOperator();
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (1 && num) {
        printf("\nIt is TRUE");
    }
    if (.1)
        printf("\nIt is TRUE");
    if (!(4 && 5))
        printf("\nIt is TRUE");
    return 0;

}
