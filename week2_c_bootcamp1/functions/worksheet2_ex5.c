#include <stdio.h>

char concatStrings(char string1, char string2)
{
    char *string1[3] = "tri";
    char *string2[5] = "angle";
    char *fullstaring[8] = string1+string2;
    return fullstaring;
}

int main(){
    printf(concatStrings(char string1, char string 2));
    return 0;
}