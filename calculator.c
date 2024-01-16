#include "calculator.h"
 
float add(float a, float b) {
    return a + b;
}
 
float subtract(float a, float b) {
    return a - b;
}
 
float multiply(float a, float b) {
    return a * b;
}
 
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        return 0; // Error case
    }
}