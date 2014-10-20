//
//  main.c
//  1
//
//  Created by Серкин Дмитрий on 14.09.14.
//  Copyright (c) 2014 Серкин Дмитрий. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "function.h"

enum input
{
    input_correct,
    input_incorrect
};

enum answer_count
{
    no_answer,
    notreal_answer,
    any_answer,
    one_answer_division_cb,
    one_answer_diskriminant,
    two_answers,
    error
};


int main()
{
    double a =0 , b = 0 , c = 0 , x1 = 0 , x2 = 0 , d = 0;
    int answer_count = 0;
    if ( input( &a, &b, &c, &d, &answer_count) == input_correct )
    {
        solvesquare( &a, &b, &c, &d, &x1, &x2, &answer_count);
        output( &answer_count , &x1 , &x2 );
    }
    else
    {
        output( &answer_count, &x1 , &x2);
    }
    return 0;
}
