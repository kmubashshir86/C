#include<stdio.h>
int main() {
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    //%zu does'nt work here it will work with new copilers 
    //so m using %lu instead of zu
    printf("Size of int: %lu bytes\n", sizeof(intType));
    printf("Size of float: %lu bytes\n", sizeof(floatType));
    printf("Size of double: %lu bytes\n", sizeof(doubleType));
    printf("Size of char: %lu byte\n", sizeof(charType));
    
    return 0;
}