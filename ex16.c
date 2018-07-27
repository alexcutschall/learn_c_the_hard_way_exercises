//
//  ex16.c
//  
//
//  Created by Alexander Joseph Cutschall on 7/27/18.
//

#include "ex16.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight)
{
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);
    
    who -> name = strdup(name);
    who -> age = age;
    who -> height = height;
    who -> weight = weight;
    
    return who;
}

void Person_destroy(struct Person *who)
{
    assert(who != NULL);
    
    free(who -> name);
    free(who);
}

void Person_print(struct Person *who)
{
    printf("Name: %s\n", who -> name);
    printf("Age: %d\n", who -> age);
    printf("Height: %d\n", who -> height);
    printf("Weight: %d\n", who -> weight);
}

int main(int argc, char *argv[])
{
    //make two people structures
    struct Person *alex = Person_create("Alex Cutschall", 25, 60, 150);
    struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
    
    //print them out and where they are in memory
    printf("Alex is at memory location %p\n", alex);
    Person_print(alex);
    
    printf("Frank is at memory location %p\n", frank);
    Person_print(frank);
    
    // make everyone age 20 years and print them again
    alex -> age += 20;
    alex -> height -= 2;
    alex -> weight += 40;
    Person_print(alex);
    
    frank -> age += 20;
    frank -> weight += 20;
    Person_print(frank);
    
    //destroy them both so we clean up
    Person_destroy(alex);
    Person_destroy(frank);
    
    return 0;
}
