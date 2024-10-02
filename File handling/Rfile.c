#include <stdio.h>
#include <stdlib.h>

int main() {
    // Pointer to the file
    FILE *file;

    // Open the file in read mode ("r")
    file = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;  // Return an error code
    }

    // Buffer to hold each line of the file
    char line[256];

    // Read the file line by line
    while (fgets(line, sizeof(line), file)) {
        // Print the line to the console
        printf("%s", line);
    }

    // Close the file
    fclose(file);

    return 0;
}
