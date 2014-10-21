//
//  Header.h
//  Stack
//
//  Created by Серкин Дмитрий on 09.10.14.
//  Copyright (c) 2014 Серкин Дмитрий. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


struct List
{
    int value;
    struct List* next;
};

struct List* create_stack( struct List* stack, int first_element, bool* check);


struct List* push( struct List* stack, int new_element, bool* check);


int pop( struct List** stack);


bool empty_stack( struct List* stack );


int deep_stack( struct List* stack );


struct List* delete_stack( struct List* stack, bool *check );


bool output_stack( struct List* stack);