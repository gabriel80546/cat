#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fptr;
    int j;

    j = -1;
    for (int i = 0; i < argc; i++) {
        if(i > 1) {
            // printf("argv[%d] = %s\n", i, argv[i]);
            j++;
        } else {
            if(j >= 0) {
                // Open a file in read mode
                fptr = fopen(argv[i], "r");

                // Store the content of the file
                char myString[10000];

                // Read the content and store it inside myString
                fgets(myString, 10000, fptr);

                // Print the file content
                printf("%s", myString);
                // Close the file
                fclose(fptr);
            } else {
                // Open a file in read mode
                fptr = fopen(argv[i], "r");

                // Store the content of the file
                char myString[10000];

                // Read the content and store it inside myString
                fgets(myString, 100, fptr);
                fclose(fptr);
            }
            // j++;
        }
    }
    return 0;
}