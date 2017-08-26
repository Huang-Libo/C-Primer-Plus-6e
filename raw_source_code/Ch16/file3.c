//
//  file3.c
#include <stdio.h>
inline double square(double x) { return (int) (x * x + 0.5); }
void masp(double w)
{
    double kw = square(w);
    printf("%.2f\n", kw);
    return;
}
