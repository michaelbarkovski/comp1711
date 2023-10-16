#include <stdio.h>

int main() {

    int mark = 90;

    if (mark == 0) {
        printf("The mark of %d is zero\n", mark);
    
    }
    else if (mark < 40) {
        printf("The mark of %d is a fail \n", mark);
    }
    else {
        printf("The mark of %d is a pass \n", mark);
    }
    return 0;
}

// ● We test for multiple conditions:
// ● First check if mark is equivalent to (==):
// ○ If TRUE, print a “zero” message○ If FALSE, then go to the next “rung” in the ladder:
// ● Check if mark < 40: 
// ○ If TRUE, print a “fail” message○ If FALSE, then go to the next ”rung” in the ladder 
// ● No test – this is the “catch-all” if all the others fail:○ Print the “pass” message