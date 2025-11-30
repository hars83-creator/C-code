#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];   // Buffer to store each line

    fp = fopen("file.txt", "r");   // Open file in read mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file line by line
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);   // Print each line
    }

    fclose(fp);   // Close the file
    return 0;
}