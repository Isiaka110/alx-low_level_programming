#include <stdio.h> 
#include <stdlib.h> 


int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}
/* Handle division by zero gracefully (optional)*/
int div_s(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero\n");
        return 0; /* Or return a special value to indicate error*/
    }
    return a / b;
}

/* Handle modulo by zero gracefully (optional)*/
int mod(int a, int b) {
    if (b == 0) {
        /*Print error message (optional)*/
        fprintf(stderr, "Error: Modulo by zero\n");
        return 0; /* Or return a special value to indicate error*/
    }
    return a % b;
}


