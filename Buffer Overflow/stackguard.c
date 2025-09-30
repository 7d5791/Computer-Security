//stackGuard.c

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void foo(char *str)
{
    char buffer[12];
    /* Buffer Overflow Vulnerability*/
    strcpy(buffer, str);
}

int main(int argc, char **argv)
{
    if (argc < 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 1;
    }
    foo(argv[1]);
    printf("Returned Properly \n\n");
    return 0;
}
