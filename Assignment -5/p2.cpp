#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 1000

int main() {
    char input_file_name[] = "input.txt";
    char output_file_name[] = "output.txt";
    char line[MAX_LINE_LENGTH];
    char* red = "red";
    char* blue = "blue";
    
    // Open input and output files
    FILE* input_file = fopen(input_file_name, "r");
    FILE* output_file = fopen(output_file_name, "w");
    
    // Check if input file was opened successfully
    if (input_file == NULL) {
        printf("Error: could not open file %s\n", input_file_name);
        return 1;
    }
    
    // Read each line of the input file, replace "red" with "blue",
    // and write the modified line to the output file
    while (fgets(line, MAX_LINE_LENGTH, input_file) != NULL) {
        char* found = strstr(line, red);
        while (found != NULL) {
            strncpy(found, blue, strlen(blue));
            found = strstr(found + strlen(blue), red);
        }
        fputs(line, output_file);
    }
    
    // Close input and output files
    fclose(input_file);
    fclose(output_file);
    
    return 0;
}
