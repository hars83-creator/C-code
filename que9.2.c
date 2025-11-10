#include <stdio.h>

int main() {
    FILE *filePointer;
    char ch;

    // Open the existing file named "example.txt" in read mode ("r")
    filePointer = fopen("example.txt", "r");

    if (filePointer == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the file character by character until EOF
    while ((ch = fgetc(filePointer)) != EOF) {
        putchar(ch);  // Print each character to the console
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
