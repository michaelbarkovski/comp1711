#include <stdio.h>

int main(){
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    if(num % 4 == 0 && num % 5 == 0){
        printf("Your number is divisible by both 4 and 5. ");
    }

    else{
        printf("Your number is not divisible by both 4 and 5. ");
    }
    return 0;
}