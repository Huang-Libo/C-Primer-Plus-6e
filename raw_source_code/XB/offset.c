//
//  offset.c
#include <stdio.h>
#include <stddef.h>

struct car
{
    char brand[30];
    char model[30];
    double hp;
    double price;
};
int main(void)
{
    size_t into = offsetof(struct car, hp);  /* offset of hp member */
    printf("%zd\n", into);
}
