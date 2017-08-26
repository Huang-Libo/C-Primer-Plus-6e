//  mytype.c

#include <stdio.h>

#define MYTYPE(X) _Generic((X),\
int: "int",\
float : "float",\
double: "double",\
default: "other"\
)

int main(void)
{
    int d = 5;
    
    printf("%s\n", MYTYPE(d));     // d is type int
    printf("%s\n", MYTYPE(2.0*d)); // 2.0* d is type double
    printf("%s\n", MYTYPE(3L));    // 3L is type long
    printf("%s\n", MYTYPE(&d));    // &d is type int *
    return 0;
}
