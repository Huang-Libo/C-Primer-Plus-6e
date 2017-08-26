//
//  file1.c

#include <stdio.h>

inline static double square(double x) { return x*x; }
void spam(double);
void masp(double);
int main()
{
    double q = square(1.3);
    
    printf("%.2f\n", q);
    spam(12.6);
    masp(1.6);
    
    return 0;
}
