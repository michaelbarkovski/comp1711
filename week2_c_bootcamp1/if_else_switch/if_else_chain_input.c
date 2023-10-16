#include <stdio.h>

int main() {

    int mark;
    printf("Enter the mark: \n");
    scanf("%d", &mark);
    if (mark >= 0 && mark <= 100) {
        if (mark == 0) {
            printf("The mark of %d is zero\n", mark);
        
        }
        else if (mark < 40) {
            printf("The mark of %d is a fail \n", mark);
        }
        else {
            printf("The mark of %d is a pass \n", mark);
        }
    }
    else{
        printf("Marks have to be between 0-100\n");
    }
    return 0;
}

// - We have put our original IF..ELSE inside another IF..ELSE to first check:
// - (mark >= 0 && mark <= 100)
// - This checks that mark is >= 0 AND (&&) <=100
// - Only IF this is TRUE does the main check happen
// - If FALSE – print an “error” message