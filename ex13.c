//
//  ex13.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/25/18.
//

#include "ex13.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    
    char *states[] = {
        "california", "oregon", "washington", "texas"
    };
    int num_states = 4;
    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    
    return 0;
}
