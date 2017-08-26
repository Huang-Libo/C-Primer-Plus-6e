//
//  file2.c
#include <stdio.h>
double square(double x) { return (int) (x*x); }
void spam(double v)
{
    double kv = square(v);
    printf("%.2f\n", kv);
    return;
}
