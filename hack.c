#include <stdio.h>
#include <unistd.h>

/*
 * Compiled for Windows
 *$ x86_64-w64-mingw32-gcc --static hack.c -o hack.exe
 */
int main()
{
    int x = 5;
    printf("You have been hacked!\n");
    printf("Stealing passwords in %d seconds\n", x);
    sleep(5);
    exit(0);
}