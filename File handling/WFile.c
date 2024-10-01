#include <stdio.h>

int main() {
    FILE *filePointer;
    char data[100];
    
    // Open a file in write mode
    filePointer = fopen("file.txt", "w");
    
    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Input data to write to file
    printf("Enter data to write to the file: ");
    fgets(data, 100, stdin);

    // Write data to the file
    fprintf(filePointer, "%s", data);
    fclose(filePointer); // Close the file
    printf("Data written to file successfully.\n");
    
    return 0;
}
