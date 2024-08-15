

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = NULL;  // Pointer to store the buffer address
    size_t len = 0;     // Variable to store the size of the buffer
    size_t nread;      // Variable to store the number of characters read

    printf("Please enter a line of text:\n");

    // Read a line of input from stdin
    while (getline() > 0){
    nread = getline(&line, &len, stdin);
    }

void my_putchar() {
    write(1,&c,1);

char buff;
    read(0, &buff, 1); // fd -> file description -> entrée ou sortie
    '\n'
}
char *line  my_realloc(buff)

// my_file.txt
// 00000OIHOIADHHIOAZD
// aazdazdazd
// dakzhdazhjd


    if (nread == -1) {
        perror("getline");
        exit(EXIT_FAILURE);
    }

    printf("You entered: %s", line);

    // Free the allocated buffer
    free(line);

    return 0;
}