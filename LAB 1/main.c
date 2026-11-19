/*
 * LAB 1: First C program.
 * Prints a name, declares a few variables and prints an age with printf.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* puts() prints a line of text followed by a newline */
    puts("Tugbog Prince Oscar Mwinnuo");

    char how = 'G';
    char q = 'o';
    int age = 25;

    (void)how;
    (void)q;

    /* %d is the format specifier for an int */
    printf("Bright Morgan is %d years old \n", age);

    return 0;
}
