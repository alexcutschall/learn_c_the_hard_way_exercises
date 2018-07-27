//
//  ex15.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/25/18.
//

#include "ex15.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    //create two arrays that we care about
    int ages[] = { 23, 42, 12, 89, 2 };
    char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa" };
    
    //safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;
    
    //first way using indexing
    for (i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }
    printf("---\n");
    
    //set up the pointesr in the start of the arrays
    int *cur_ages = ages;
    char **cur_names = names;
    
    //second way of using pointers
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(cur_names + i), *(cur_ages + i));
    }
    printf("---\n");
    
    //third way, pointers are just arrays
    for (i = 0; i < count; i++) {
        printf("%s is %d years old.\n", cur_names[i], cur_ages[i]);
    }
    printf("---\n");
    
    //fourth way with pointers in a stupid complex way
    for (cur_names = names, cur_ages = ages; (cur_ages - ages) < count; cur_names++, cur_ages++) {
        printf("%s lived %d years so far.\n", *cur_names, *cur_ages);
    }
        
    return 0;
}
