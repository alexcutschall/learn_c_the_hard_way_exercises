//
//  ex12.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/24/18.
//

#include "ex12.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Alex";
    char full_name[] = { 'Z', 'e', 'd', 'A',
        'S', 'h', 'a', 'w', '\0'
    };
    
    // What's the difference between name[] and *other_name?
    // name[] are just single chars whereas *other_name is a string of chars
    // char *names[] would be an array of strings
    char *other_name = "John";
    printf("This is the other name: %s\n", other_name);
    
    //WARNING: On some systems you may have to change the %ld
    // in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("the number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd is %d.\n", areas[0], areas[1]);
    
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The numbers of chars: %ld\n", sizeof(name) / sizeof(char));
    
    printf("The size of full name: %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
    
    return 0;
}
