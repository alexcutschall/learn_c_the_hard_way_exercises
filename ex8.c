//
//  ex8.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/24/18.
//

#include "ex8.h"
#include <stdio.h>

int main(int argc, char* argv[])
{
    int i = 0;
    
    if (argc == 1) {
        printf("You only have one argument. You suck.\n");
    } else if (argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");
        
        //changing the start to i = 0 to 1 eliminates printing the ./ex8
        for (i = 1; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
        printf("\n");
    }
    else {
        printf("You have too many arguments. You suck.\n");
    }
    
    return 0;
}
