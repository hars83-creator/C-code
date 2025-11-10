#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open a new file named "example.txt" in write mode ("w")
    filePointer = fopen("example.txt", "w");

    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write text to the file
    fprintf(filePointer, "Hello, this is a sample text written to the file.\n");

    // Close the file
    fclose(filePointer);

    printf("Text written to the file successfully.\n");

    return 0;
}
