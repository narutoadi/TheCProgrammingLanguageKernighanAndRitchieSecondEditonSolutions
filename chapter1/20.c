//This exercise is asking you to emulate the behavior of tabs by adding the correct amount of spaces, such that the output is still aligned on tab stops.
#include <stdio.h>
#define TABWIDTH 8

main()
{
    int i;
    int c, col, spaces;

    col = 0;
    while((c = getchar()) != EOF) {
        if (c == '\t') {
            spaces = TABWIDTH - col % TABWIDTH;
            for (i = 0; i < spaces; ++i)
                putchar(' ');
            col = col + spaces;
        } else {
            putchar(c);
            col = col + 1;
            if (c == '\n')
                col = 0;
        }
    }
}