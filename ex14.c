//
//  ex14.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/25/18.
//

#include "ex14.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

//forward declarations
void print_letters(char arg[]);
int can_print_it(char ch);

void print_arguments(int argc, char *argv[])
{
    int i = 0;
    for (i = 1; i < argc; i++) {
        print_letters(argv[i]);
    }
}

void print_letters(char arg[])
{
    int i = 0;
    int string_length = strlen(arg);
    for (i = 0; i < string_length; i++) {
         char ch = arg[i];
         if (isalpha(ch) || isblank(ch)) {
             printf("'%c' == %d ", ch, ch);
         }
    }
    printf("\n");
}

//int can_print_it(char ch)
//{
//    return isalpha(ch) || isblank(ch);
//}


int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
