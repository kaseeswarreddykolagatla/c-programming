#include <stdio.h>

int main() {
    FILE *file;
    int i, num_items;

    // Open the binary file in read mode
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the number of items in the file
    fread(&num_items, sizeof(int), 1, file);
    printf("Number of items in file: %d\n", num_items);

    // Loop through each item in the file and print its contents
    for (i = 0; i < num_items; i++) {
        int id, age;
        char name[20];

        // Read the data for this item from the file
        fread(&id, sizeof(int), 1, file);
        fread(name, sizeof(char), 20, file);
        fread(&age, sizeof(int), 1, file);

        // Print the data for this item to the console
        printf("Item %d: ID=%d, Name=%s, Age=%d\n", i+1, id, name, age);
    }

    // Close the file
    fclose(file);

    return 0;
}