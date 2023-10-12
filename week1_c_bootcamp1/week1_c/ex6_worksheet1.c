//ex 6 determine whether value is odd or even 

#include <stdio.h>

int main() {

    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    
    if (number%2 != 0) {
        printf("Your number is odd");

    }
    else {
        printf("Your number is even ");
    }
}