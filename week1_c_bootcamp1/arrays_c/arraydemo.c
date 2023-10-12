#include <stdio.h>

int main() {

    int a [10];
    int count;

    //populate array

    for (count = 0; count < 10 ; count++)
    {
        a[count] = count * 10 + count;
    }



    printf("The first and second elements are %d and %d\n", a[0], a[1]);
    printf("Or, via pointers, %d and %d\n", *a, *(a+1));

    // ● We initialise an array for 10 integer values [0 to 9]
    // ● We use a loop to populate with the values 0, 11, 22, 33 etc.
    // ● We then read a[0] and a[1]
    // ● We then read the same values but accessed via pointers

    int b = 0;
    for (b=0; b<10; b++) {    // my own loop to test the numbers in the array
        printf("%d\n", a[b]);
    }

    return 0;

}