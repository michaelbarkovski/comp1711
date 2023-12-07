#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

//#include "FitnessDataStruct.h"

// Struct moved to header file
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }

void Menu() {
    printf("Menu Options: \n");

    printf("A: Specify the filename to be imported \n");

    printf("B: Display the total number of records in the file \n");

    printf("C: Find the date and time of the timeslot with the fewest steps \n");

    printf("D: Find the data and time of the timeslot with the largest number of steps \n");

    printf("E: Find the mean step count of all the records in the file \n");

    printf("F: Find the longest continuous period where the step count is above 500 steps \n");

    printf("Q: Quit \n"); 

}


void optionA(){
    char filename[100];
    printf("Input Filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL){
        printf("Error: Could not open file\n ");
        
    } 

    else {
        fclose(file);
    }




}

void optionB(){
    char filename[100];
    printf("Input Filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    
    int buffer_size = 100;
    char line_buffer[buffer_size];


    int count = 0;
    char date[11];
    char time[6];
    char steps[10];

    FITNESS_DATA data[100];

    
   while(fgets(line_buffer,buffer_size,file)){
    tokeniseRecord(line_buffer,",",date,time,steps);

    strcpy(data[count].date, date);
    strcpy(data[count].time, time);
    data[count].steps = atoi(steps);
    count++;

   }

    fclose(file);

    printf("Number of records in file: %d\n", count);

   // for(int x = 0; x<3; x++){
   //     printf("%s/",data[x].date);
   //     printf("%s/",data[x].time);
   //     printf("%d\n",data[x].steps);
   // }
}

void optionC(){
    char filename[100];
    printf("Input Filename: ");
    scanf("%99s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL){
        printf("Error: Could not open file\n ");
        
    } 

    int buffer_size = 100;
    char line_buffer[buffer_size];


    int count = 0;
    char date[11];
    char time[6];
    char steps[10];

    FITNESS_DATA data[100];

    
   while(fgets(line_buffer,buffer_size,file)){
    tokeniseRecord(line_buffer,",",date,time,steps);

    
    data[count].steps = atoi(steps);
    count++;
    
   }

    fclose(file);


    char date_output[12];
    char time_output[20];
    int min_Steps = INT_MAX; //INT_MAX found online, aswell as include <limits.h> 

    for (int i = 0; i<count; i++){

        if(data[i].steps < min_Steps){
            min_Steps = data[i].steps;
            strcpy(date_output, data[i].date);
            strcpy(time_output, data[i].time);

        }
    


    }

    printf("Fewest steps: %s %s\n ", date_output, time_output);
    

}

void optionD(){
        char filename[100];
    printf("Input Filename: ");
    scanf("%99s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL){
        printf("Error: Could not open file\n ");
        
    } 

    int buffer_size = 100;
    char line_buffer[buffer_size];


    int count = 0;
    char date[11];
    char time[6];
    char steps[10];

    FITNESS_DATA data[100];

    
   while(fgets(line_buffer,buffer_size,file)){
    tokeniseRecord(line_buffer,",",date,time,steps);

    
    data[count].steps = atoi(steps);
    count++;
    
   }

    fclose(file);


    char date_output[12];
    char time_output[20];
    int max_Steps = INT_MIN; //INT_MAX found online, aswell as include <limits.h> 

    for (int i = 0; i<count; i++){

        if(data[i].steps > max_Steps){
            max_Steps = data[i].steps;
            strcpy(date_output, data[i].date);
            strcpy(time_output, data[i].time);

        }
    


    }

    printf("Largest steps: %s %s\n ", date_output, time_output);
    


}

void optionE(){

    char filename[100];
    printf("Input Filename: ");
    scanf("%99s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL){
        printf("Error: Could not open file\n ");
        
    } 

    int buffer_size = 100;
    char line_buffer[buffer_size];


    int count = 0;
    char date[11];
    char time[6];
    char steps[10];

    FITNESS_DATA data[100];

    
   while(fgets(line_buffer,buffer_size,file)){
    tokeniseRecord(line_buffer,",",date,time,steps);

    
    data[count].steps = atoi(steps);
    count++;
    
   }

    fclose(file);
    int total = 0;
    for(int i=0; i<count; i++) {
       
        total = total + data[i].steps;
        
    }
    
    int mean = 0;
    mean = total / count;

    printf("%d \n ", mean);
    
}

void optionF(){

    char filename[100];
    printf("Input Filename: ");
    scanf("%99s", filename);

    FILE *file = fopen(filename, "r");

    if (file == NULL){
        printf("Error: Could not open file\n ");
        
    } 

    int buffer_size = 100;
    char line_buffer[buffer_size];


    int count = 0;
    char date[11];
    char time[6];
    char steps[10];

    FITNESS_DATA data[100];

    
   while(fgets(line_buffer,buffer_size,file)){
    tokeniseRecord(line_buffer,",",date,time,steps);

    
    data[count].steps = atoi(steps);
    count++;
    
   }

    fclose(file);

    char date_start[12];
    char time_start[20];
    char date_finish[12];
    char time_finish[12];
    int streak; 


    for (int i = 0; i<count; i++){

        if(data[i].steps > 500){
            max_Steps = data[i].steps;
            strcpy(, data[i].date);
            strcpy(time_output, data[i].time);

        }
    


    }




}

void optionQ(){
    printf("Q");
}




// Complete the main function
int main() {

    char option;

    do {
        Menu();

        scanf(" %c", &option);
        //option = getchar();

        switch (option){
            case 'A':
                optionA();
                break;
            
            case 'B':
                optionB();
                break;
            
            case 'C': 
                optionC();
                break;
            
            case 'D':
                optionD();
                break;

            case 'E':
                optionE();
                break;
            
            case 'F':
                optionF();
                break;
            
            case 'Q':
                optionQ();
                break;
            
            default:
                printf("Invalid Choice. Try again. \n ");          

        }

    } while (option != 'Q');

    return 0;

}








