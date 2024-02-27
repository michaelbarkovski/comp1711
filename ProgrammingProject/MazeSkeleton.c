#include <stdio.h>

//defining the acceptible dimensions for the maze as described in the prompt
#define MaxHeight 100
#define MinHeight 5
#define MaxWidth 100
#define minWidth 5

typedef struct{
    int Maze_height;
    int Maze_width;


} Maze;

int load_file(){
    // code to load in the maze file written here
    // function should check if the file can be opened, and return 1 with an error message if it cannot
    // program should also check if the dimensions of the Maze are within the given range, defined at the start of the program
}

void display_Maze() {
    // code here should display the maze on the terminal

}

void player_Move(){
    // code here should handle the moves of the player
}



int main(){

    load_file(filename, &Maze); //calling in the load file function

    int endGame = 0; // when endGame becomes equal to 1, the game ends 
    char move; // variable that stores the move of the player
    while (endGame!=0){
        display_Maze(&Maze);
        
        // scans the players move and stores it in the move variable
        printf("Please enter your move (case insensitive): (W/A/S/D/M): \n");
        scanf(" %c", &move);

        switch(move) {
            case 'W': 
            case 'w':
            case 'A':
            case 'a':
            case 'S':
            case 's':
            case 'D':
            case 'd':
            // if any of the above options are entered (moves on the board), the player_Move function is called
                player_Move(move, &Maze); 
            case 'M':
            case 'm':
            // if the above options are entered, the display_Maze function is called
                display_Maze(&Maze);
                break;
            // asking user to enter a correct option if their input does not match the cases
            default:
                printf("Please enter a valid move from the options: (W/A/S/D/M): \n");
                
        }

        // checking if the user has reached the exit and if the game should end

        if(/* player reaches the 'E' on the maze */){
            endGame = 1;
            printf("You have successfully escaped the Maze. Well done! \n");
        }

        return 0;
    }



}