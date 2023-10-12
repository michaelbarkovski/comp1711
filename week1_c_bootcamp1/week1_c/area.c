#include <stdio.h>

int main() {
    float length;
    float width;
    float area;

    printf("Hello, please enter the length of your rectangle: ");
    scanf("%f", &length);

    printf("Now enter the width: ");
    scanf("%f", &width);

    area = length * width;

    printf("The area of your rectangle is %f cm^2\n ", area);

    return 0; 



}