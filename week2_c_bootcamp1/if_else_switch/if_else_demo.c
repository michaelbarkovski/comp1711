#include <stdio.h>

int main() {
    int mark = 30;

    if (mark >= 40) 
    {
        printf("The mark of %d is a pass \n", mark);
    }

    else{
        printf("The mark of %d is a fail\n", mark);
    }
    return 0;
}
// ● Initialise an integer variable (mark) to 40
// ● Check if mark >= 40 (conditional test) 
// ○ If TRUE: Print the “passed” message○ If FALSE: Print the “failed” message
// ● The conditional test always evaluates to true or false 
// ● Test for all conditions in some logical order 
// ● Have a “catch all” at the end – no value should be missed out○ Actually quite hard to do
