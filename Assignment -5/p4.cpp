#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 256

int main() {
    char filename[MAX_LINE_LENGTH];
    char search_string[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];

    printf("Enter the name of the file: ");
    fgets(filename, MAX_LINE_LENGTH, stdin);

    printf("Enter the search string: ");
    fgets(search_string, MAX_LINE_LENGTH, stdin);

    // remove newline characters from input strings
    filename[strcspn(filename, "\n")] = '\0';
    search_string[strcspn(search_string, "\n")] = '\0';

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: file %s not found.\n", filename);
        return 1;
    }

    while (fgets(line, MAX_LINE_LENGTH, file)) {
        if (strstr(line, search_string) != NULL) {
            printf("%s", line);
        }
    }

    fclose(file);

    return 0;
}