//
//  header.h
//  Polish Notation
//
//  Created by Серкин Дмитрий on 23.10.14.
//  Copyright (c) 2014 Serkin. All rights reserved.
//

//#ifndef Polish_Notation_header_h
//#define Polish_Notation_header_h


//#endif

#ifndef _STACK_H_
#define _STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

enum
{
    stack_is_empty = 83655
};

typedef struct node
{
    int data;
    struct node* next;
}list;


void push(list** stack, int value);
int pop(list** stack);
bool is_empty(list* stack);
int get_count(list* stack);
void clear(list* stack);

#endif