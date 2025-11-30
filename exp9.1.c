#include <stdio.h>

int main() {
    FILE *fp;  // File pointer
    fp = fopen("example.txt", "w"); // Create/Open file in write mode

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Hello! This text is written into the file.\n");
    // You can also use: fputs("Hello! This is file writing in C.\n", fp);

    fclose(fp); // Close the file

    printf("File created and text written successfully.\n");
    
    return 0;
}
 