//
//  ex11.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/24/18.
//

#include "ex11.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
    
    int numbers[4] = { 0 };
    char name[4] = { 'a'};
    
    //first, print them out raw
    printf("name each: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    printf("name: %s\n", name);
    
    //set up the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    
    //set up the name
    name[0] = 'A';
    name[1] = 'l';
    name[2] = 'e';
    name[3] = '\0';
    
    //then print them out initialized
    printf("name each: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
    
    //print the name like a string
    printf("%s\n", name);
    
    //another way to use name
    char *another_name = "Alex";
    printf("another name: %s\n", another_name);
    
    printf("another name each: %c %c %c %c\n", another_name[0], another_name[1], another_name[2], another_name[3]);
    
    return 0;
    
}
