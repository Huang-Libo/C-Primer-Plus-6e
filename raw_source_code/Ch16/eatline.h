//  eatline.h

#ifndef EATLINE_H_
#define EATLINE_H_
inline static void eatline(void)
{
    while (getchar() != '\n')
        continue;
}

#endif