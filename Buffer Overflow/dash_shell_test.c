/* This program has a buffer overflow vulnerability. */
// dash_shell_test.c

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int main()
{
    char *argv[2]; //Array for command and NULL terminator
    argv[0]="/bin/sh";
    argv[1]= NULL;


    setuid(0); //set real UID to 0
    execve("/bin/sh", argv, NULL);
    return 0;
}
