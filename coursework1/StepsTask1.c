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
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
    }

   FITNESS_DATA data[10000]; //each line read from file is stored into array data
   int read = 0; //read stores the number of values that were read in succesfully from each line of the file 
   int records = 0; //records keeps track of the number of records stored in from the file (second task)

   while(!feof(file)) {

    read = fscanf(file, "%11 %6 %d\n", data[records].date, data[records].time, &data[records].steps);  //reading each element in the record
    if (ferror(file)){
        printf("Error reading file. \n");
        return 1;
    }
   }

   fclose(file);

   printf("Number of records in file: %d\n", records);

   for (int i = 0; i < records; i++) {
    printf("%c %c %d\n", data[i].date, data[i].time, data[i].steps);

   }
   


    


    return 0;
}
