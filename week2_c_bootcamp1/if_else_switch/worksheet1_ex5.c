#include <stdio.h>

int main() {

    int option;

    while (option != 0) {

        printf("Select (1-6), or 0 to Exit: CHELSEA, ARSENAL, LIVERPOOL, SPURS, CITY, UNITED ");
        scanf("%d", &option);

        switch(option){
            case 0:
            break;

            case 1: printf("lav it coyb\n");
            break;

            case 2: printf("prat \n");
            break;

            case 3: printf("anfield library\n");
            break;

            case 4: printf("no one likes you\n");
            break; 

            case 5: printf("plastic and you're well boring \n");
            break;

            case 6: printf("washed team tbh\n ");
            break;
            
            default: printf("Pick an option between 1-6 pal\n ");
            break;

        }
    }

    return 0;
}