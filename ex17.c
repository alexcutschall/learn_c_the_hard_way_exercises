//
//  ex17.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/27/18.
//

#include "ex17.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA = 512;
#define MAX_ROWS = 100;

struct Address {
    int id;
    int set;
    char name[MAX_DATA];
    char email[MAX_DATA];
};

struct Database {
    struct Address rows[MAX_ROWS];
};

struct Connection {
    FILE *file;
    struct Database *db;
};

int main(int argc, char *argv[])
{
    return 0;
}
