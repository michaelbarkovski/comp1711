#include <stdio.h>

int main() {
    int age; 

    printf("Hello, please enter your age: ");
    scanf("%d", &age);   //& is the "adress of" operator - although we can print the contents of a variable by reffering to it directly - scanf needs to know the memory address of the variable, &age is the address of the variable age
    printf("Your age is %d\n", age);   // \n is the "newline" character
    return 0;
} 