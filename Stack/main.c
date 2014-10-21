//
//  main.c
//  Stack
//
//  Created by Серкин Дмитрий on 09.10.14.
//  Copyright (c) 2014 Серкин Дмитрий. All rights reserved.
//
#include "header.h"

void main()
{
    int action = 1, temp;
    bool check;
    struct List* stack = NULL;
    while ( action != 0  )
    {
        printf( " What do you want?\n '0' - close program ;\n '1' - create stack ;\n '2' - new element ;\n '3' - deep of stack;\n '4' - delete stack;\n '5' - output stack;\n '6' - delete top element. \n ");
        scanf( "%d", &action );
        switch ( action)
        {
            case 1:
                printf( " Write first element of stack:\n " );
                scanf("%d", &temp);
                stack = create_stack( stack, temp, &check);
                if ( check == false)
                {
                    printf( " Stack created earlier. ");
                }
                else
                {
                    printf( " Stack created correctly. ");
                }
                break;
                
            case 2:
                printf( " Write new element of stack:\n " );
                scanf("%d", &temp);
                stack = push( stack, temp, &check);
                if ( check == false)
                {
                    printf( " New element not created, memory is full. \n ");
                }
                else
                {
                    printf( " New element created. \n");
                }
                break;
                
            case 3:
                printf(" Deep of stack = %d . \n", deep_stack( stack ) );
                break;
                
            case 4:
                stack = delete_stack(stack, &check);
                if ( check == false)
                {
                    printf( " Stack not deleted, memory pure. \n");
                }
                else
                {
                    printf( " Stack deleted. \n");
                }
                
                break;
                
            case 5:
            {
                printf(" Output:\n");
                if ( output_stack( stack) == false) printf( " There is not stack. \n");
            }
                break;
                
            case 6:
            {
                int temp2;
                temp2 = pop(&stack);
                if ( temp2 == -2147483648 )
                {
                    printf( " Error. Memory pure .\n");
                }
                else
                {
                    printf( " Element %d deleted.\n", temp2 );
                }
            }
            
                break;
                
            default:
            {
                printf(" Not correct input");
            }
                break;
        }
    }
}