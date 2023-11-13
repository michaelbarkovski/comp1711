#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

// Define any additional variables here



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

// Complete the main function

int main() {
    char filename [] = "FitnessData_2023.csv";
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("");
        return 1;
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

    strcpy(data[count].date, date);
    strcpy(data[count].time, time);
    data[count].steps = atoi(steps);
    count++;

   }

    fclose(file);

    printf("Number of records in file: %d\n", count);

    for(int x = 0; x<3; x++){
        printf("%s/",data[x].date);
        printf("%s/",data[x].time);
        printf("%d\n",data[x].steps);
    }

    


    return 0;
}
