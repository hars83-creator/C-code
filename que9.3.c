#include <stdio.h>

int main() {
    FILE *filePointer;
    char buffer[256];  // Buffer to hold each line

    // Open the file named "example.txt" in read mode
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the file line by line using fgets
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);  // Print each line
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
