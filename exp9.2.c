#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("file.txt", "r");   // Open file in read mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read and print each character
    ch = fgetc(fp);
    while (ch != EOF) {
        putchar(ch);          // Print the character
        ch = fgetc(fp);       // Read next character
    }

    fclose(fp);               // Close the file
    return 0;
}