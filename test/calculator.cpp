//
// Created by Nebi Kirmali on 1-10-2018.
//

#include "calculator.h"
int calculator::add(int number1, int number2) {
    return number1 + number2;
}

double calculator::add(double number1, double number2) {
    return number1 + number2;
}

int calculator::substract(int number1, int number2) {
    return number1 - number2;
}

double calculator::substract(double number1, double number2) {
    return number1 - number2;
}

int calculator::multiply(int number1, int number2) {
    return number1 * number2;
}

double calculator::multiply(double number1, double number2) {
    return number1 * number2;
}

int calculator::divide(int number1, int number2) {
    if (number2 == 0) {
        throw "Divide by 0 is not possible";
    } else {
        return number1 / number2;
    }
}

double calculator::divide(double number1, double number2) {
    if (number2==0) {
        throw "Divide by 0 is not possible";
    } else {
        return number1 / number2;
    }
}

int calculator::square(int number) {
    return number * number;
}

double calculator::square(double number) {
    return number * number;
}