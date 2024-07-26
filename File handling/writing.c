#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *file;

    // Check if a string is provided as a command-line argument
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <string to write>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Open the file in write mode
    file = fopen("sample.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Write the string to the file
    if (fputs(argv[1], file) == EOF) {
        perror("Error writing to file");
        fclose(file);
        return EXIT_FAILURE;
    }

    // Close the file
    fclose(file);

    printf("String written to file successfully.\n");

    return EXIT_SUCCESS;
}
