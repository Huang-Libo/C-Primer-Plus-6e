//
//  strrtok.c

#include <stdio.h>
#include <string.h>

int main(void)
{
    char data[] = "  C is\t  too#much\nfun!";
    const char tokseps[] = " \t\n#"; /* separators  */
    char * pt;
    
    puts(data);
    pt = strtok(data,tokseps);       /* intial call  */
    while (pt)                       /* quit on NULL */
    {
        puts (pt);                   /* show token   */
        pt = strtok(NULL, tokseps);  /* next token   */
    }
    return 0;
}
