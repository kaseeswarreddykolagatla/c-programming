#include <stdio.h>
#include <ctype.h>

int main() {
    // Open the input file for reading
    FILE *input_file = fopen("data.txt", "r");
    if (input_file == NULL) {
        printf("Could not open input file.");
        return 1;
    }
    
    // Initialize an array to store the letter counts
    int letter_counts[26] = {0};
    
    // Read through the input file character by character
    int c;
    while ((c = fgetc(input_file)) != EOF) {
        // Convert the character to uppercase
        c = toupper(c);
        
        // Check if the character is a letter
        if (isalpha(c)) {
            // Increment the count for this letter
            letter_counts[c - 'A']++;
        }
    }
    
    // Close the input file
    fclose(input_file);
    
    // Open the output file for writing
    FILE *output_file = fopen("statistics.txt", "w");
    if (output_file == NULL) {
        printf("Could not open output file.");
        return 1;
    }
    
    // Write the letter counts to the output file
    for (int i = 0; i < 26; i++) {
        fprintf(output_file, "%c: %d\n", 'A' + i, letter_counts[i]);
    }
    
    // Close the output file
    fclose(output_file);
    
    return 0;
}