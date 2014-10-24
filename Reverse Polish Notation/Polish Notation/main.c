//
//  main.c
//  Polish Notation
//
//  Created by Серкин Дмитрий on 23.10.14.
//  Copyright (c) 2014 Serkin. All rights reserved.
//

#include "stack.h"

#define enter 10
#define space 32

void main()
{
    char symbol;
    int value = 0;
    list* stack = NULL;
    printf( " Input notation:\n");
    scanf( "%c", &symbol);
    while ( symbol != enter )
    {
        if ( symbol >= '0' && symbol <= '9' )
        {
           while ( symbol != space )
           {
               value = value * 10;
               value = value + ( symbol - '0');
               scanf( "%c", &symbol);
           }
           push( &stack, value);
            value = 0;
        }
        else
        {
            switch ( symbol)
                {
                    case '+' :
                    push( &stack, ( pop( &stack) + pop( &stack) ) );
                    break;
                   
                    case '-' :
                    {
                        int first, second;
                        second = pop( &stack);
                        first = pop( &stack);
                        push( &stack, ( first - second ) );
                    }
                        break;
                        
                    case '*' :
                    push( &stack, ( pop( &stack) * pop( &stack) ) );
                    break;
                   
                    case '/' :
                    {
                        int first, second;
                        second = pop( &stack);
                        first = pop( &stack);
                        push( &stack, ( first / second ) );
                    }
                        break;
                   
                    default:
                    break;
                }
        }
        scanf( "%c", &symbol);
    }
    printf( "Result of recording: %d\n", pop( &stack) );
}
