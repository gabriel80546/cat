#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    FILE *fptr;
    int i;

    if (argc <= 1) {
        printf("argumentos insuficientes\n");
        return 0;
    }
    for(i = 1; i < argc; i++) {
        // printf("%s\n", argv[i]);

        // Open a file in read mode
        fptr = fopen(argv[i], "r");

        // Store the content of the file
        char myString[10000];

        // Read the content and print it
        while(fgets(myString, 10000, fptr)) {
            printf("%s", myString);
        }
        // Close the file
        fclose(fptr);
    }
    return 0;
}