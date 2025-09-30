//ASLR Experiment. File a.c

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char x[12];
    char *y = malloc(sizeof(char) * 12);
    if (y == NULL) {
        printf("Error: Memory allocation failed\n");
        return 1;
    }
    printf("Address of buffer x (on stack): %p\n", (void*)x);
    printf("Address of buffer y (on heap): %p\n", (void*)y);
    free(y);
    return 0;
}
