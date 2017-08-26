
//  el2.c

#include <stdio.h>
#include "eatline.h"

void dmb(void)
{
    double m, b;
    
    scanf("%lf", &m);
    eatline();
    scanf("%lf", &b);
    printf("%f %f\n", m, b);
    return;
}

