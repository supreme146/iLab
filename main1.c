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


int input(double* a, double* b, double* c, double* d, int* answer_count)
{
    if ((scanf ("%lg %lg %lg", a, b, c)) == 3)
    {
        if ( *a == 0 )
        {
            if ( *b == 0 )
            {
                if ( *c == 0 )
                {
                    *answer_count = any_answer;
                }
                else
                {
                    *answer_count = no_answer;
                }
            }
            else
            {
                *answer_count = one_answer_division_cb;
            }
        }
        else
        {
            *d = ( (*b) * (*b) ) - (4 * (*a) * (*c));
        
            if (*d < 0)
            {
                *answer_count = notreal_answer ;
            }
        
            if (*d == 0 )
            {
                *answer_count = one_answer_diskriminant;
            }
        
            if (*d > 0)
            {
                *answer_count = two_answers;
            }
        }
        return input_correct;
    }
    else
    {
        *answer_count = error;
        return input_incorrect;
    }
}


void output(int* answ_count, double* x1, double* x2 )
{
    switch (*answ_count)
    {
        case any_answer :
            printf("Is any possible number.\n'");
            break;
            
        case no_answer:
            printf("There is no any solutions.\n");
            break;
            
        case one_answer_division_cb:
            printf("Only one answer. x = %lg.\n", *x1);
            break;
            
        case one_answer_diskriminant:
            printf("Only one answer. x = %lg.\n", *x1);
            break;
            
        case two_answers:
            printf("Two answer: x1 = %lg , x2 = %lg.\n", *x1, *x2);
            break;
            
        case notreal_answer:
            printf("Not real answers.\n");
            break;
        case error:
            printf("Input error.\n");
            break;
    }
}


void solvesquare(double* a, double* b, double* c, double* d, double* x1, double* x2, int* answer_count )
{
    switch (*answer_count)
    {
        case one_answer_division_cb:
            *x1 = -1 * ( *c / *b);
            break;
            
        case one_answer_diskriminant:
            *x1 = ( -1 * (*b) ) / ( 2 * (*a) );
            break;
            
        case two_answers:
        {
            *x1 = ( -1 * (*b) + sqrt( *d) ) / (2 * (*a));
            *x2 = ( -1 * (*b) - sqrt( *d) ) / (2 * (*a));
        }
    }
}


    
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
