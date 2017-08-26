//  complex.c --  complex numbers
#include <stdio.h>
#include <complex.h>
void show_cmlx(complex double cv);
int main(void)
{
    complex double v1 = 4.0 + 3.0*I;
    double re, im;
    complex double v2;
    complex double sum, prod, conjug;
    
    printf("Enter the real part of a complex number: ");
    scanf("%lf", &re);
    printf("Enter the imaginary part of a complex number: ");
    scanf("%lf", &im);
//  CMPLX() a C11 feature
//  v2 = CMPLX(re, im);
    v2 = re + im * I;
    printf("v1: ");
    show_cmlx(v1);
    putchar('\n');
    printf("v2: ");
    show_cmlx(v2);
    putchar('\n');
    sum = v1 + v2;
    prod = v1 * v2;
    conjug = conj(v1);
    printf("sum: ");
    show_cmlx(sum);
    putchar('\n');
    printf("product: ");
    show_cmlx(prod);
    putchar('\n');
    printf("complex congjugate of v1: ");
    show_cmlx(conjug);
    putchar('\n');
    
    return 0;
}

void show_cmlx(complex double cv)
{
    printf("(%.2f, %.2fi)", creal(cv), cimag(cv));
    return;
}