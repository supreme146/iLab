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

int main()
{
    double a=0, b=0, c=0;
    double x1=0, x2=0;
    scanf("%lg%lg%lg",&a,&b,&c);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Х - любое число.");
            }
            else
            {
                printf("Система не имеет решений.");
            }
        }
        else
        {
            if (c == 0)
            {
                printf(" Система имеет решение в виде x=0.");
            }
            else
            {
                x1 = -c / b;
                printf(" Система имеет одно решение : %lg.", x1 );
            }
        }
    }
    else
    {
        double d=0;
        d=b * b - 4 * a * c;
        if (d < 0)
        {
            printf("Решением системы является невещественное число.");
        }
        if (d == 0 )
        {
            x1 = - b / (2 * a);
            printf("Система имеет одно решение: %lg.", x1);
        }
        if (d < 0)
        {
            x1 = - b + sqrt(d);
            x2 = - b - sqrt(d);
            printf("Система имеет два решения: %lg и %lg.", x1, x2);
        }
        
    }
    return 0;
}
