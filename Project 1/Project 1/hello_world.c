/*********************************************************
 * wring1@uncc.edu
 * ITCS 2116, Summer 2017
 * HW1, Due 9/28/17
 *
 * hello_world.c - This program outputs a simple message.  
 * It just shows I can format, compile, test, debug, 
 * and submit a C program.
 *********************************************************/

#include <stdio.h>

int main (void) {
    // This line is needed to prevent output buffering errors
    setvbuf(stdout, NULL, _IONBF, 0);

    (void) printf ("Hello, world, my UNC Charlote Email address is wring1@uncc.edu\n");

    return (0);
}