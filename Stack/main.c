//
//  main.c
//  Stack
//
//  Created by Серкин Дмитрий on 09.10.14.
//  Copyright (c) 2014 Серкин Дмитрий. All rights reserved.
//
void main()
{
    int action = 1, temp;
    bool check;
    struct List* stack = NULL;
    while ( action != 0  )
    {
        printf( " What do you want?\n '0' - close program ;\n '1' - create stack ;\n '2' - new element ;\n '3' - delete top element ;\n '3' - deep of stack;\n '4' - delete stack;\n '5' - ");
        scanf( "%d", &action );
        switch ( action)
        {
            case 1:
                printf( " Write first element of stack:\n " );
                scanf("%d", &temp);
                create_stack( stack, temp, &check);
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
                push( stack, temp, &check);
                if ( check == false)
                {
                    printf( " New element not created, memory is full. ");
                }
                else
                {
                    printf( " New element created. ");
                }
                break;
                
            case 3:
                printf(" Deep of stack = %d .", deep_stack( stack ) );
                break;
                
            case 4:
                if ( check == false)
                {
                    printf( " Stack not deleted, memory pure. ");
                }
                else
                {
                    printf( " Stack deleted.");
                }
                
                break;
                
            case 5:
            {
                printf(" Output:\n");
                if ( output_stack( stack) == false) printf( " There is not stack ");
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