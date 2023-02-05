#include <stdio.h>
#include "numbers.h"

int main() {
    float a,b;
    char op;
    printf ("Enter an expression to evaluate: ");
    scanf("%f %c %f",&a, &op,&b);
    float result = evaluateOperator(a,op,b);
    printf("%.2f", result);
    return 0;

}
