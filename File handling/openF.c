#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char textToWrite[] = "Hello, this is a test file.";
    char buffer[100];

    // Open the file for writing (creates a new file or truncates an existing file)
    file = fopen("testfile.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return EXIT_FAILURE;
    }

    // Write text to the file
    fprintf(file, "%s\n", textToWrite);
    fclose(file); // Close the file after writing

    // Open the file for reading
    file = fopen("testfile.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return EXIT_FAILURE;
    }

    // Read the contents of the file
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file); // Close the file after reading
    return EXIT_SUCCESS;
}
