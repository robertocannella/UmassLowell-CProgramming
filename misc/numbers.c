//
// Created by Roberto Cannella on 2/5/23.
//
#include "stdio.h"
#include "numbers.h"

float evaluateOperator (float a, char op, float b){

    switch (op) {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '/':
            return a / b;
            break;
        case '*':
            return a * b;
            break;
        default:
            0;
    }
    return 0;

}
void runEvaluateOperator(){
    float a,b;
    char op;
    printf ("Enter an expression to evaluate: ");
    scanf("%f %c %f",&a, &op,&b);
    float result = evaluateOperator(a,op,b);
    printf("%.2f", result);
}