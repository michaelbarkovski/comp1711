#include <stdio.h>

int main() {
    char name[15];   //define a character string variable called name that can contain up to 15 characters

    printf("Hello, please enter your name: ");
    scanf("%s", name);  //scanf lets us read in data from the keyboard; %s - in string format - and stores in the variable name
    printf("Your name is %s\n", name);  //printf in this case prints the phrase in quotes and substitues my name for the %s format specifier

    return 0;
}