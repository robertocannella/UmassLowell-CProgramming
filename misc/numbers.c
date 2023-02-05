//
// Created by Roberto Cannella on 2/5/23.
//
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