//exercise 5, write a program to swap the values of two variables 

#include <stdio.h>

int main() {

    int a;
    int b;
    int c;
    printf("variable 1 ");
    scanf("%d", &a);

    printf("variable 2 ");
    scanf("%d", &b);

    c = a;
    a = b; 
    b = c;

    printf("%d %d", a,b);

    return 0;
}