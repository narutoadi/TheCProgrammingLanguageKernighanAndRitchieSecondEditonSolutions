#include <stdio.h>
#include <stdlib.h>

#define TRUE  1
#define FALSE 0
#define TABWIDTH 4

int main(void)
{
    int i;
    int c, col, blanks, numtabs;

    col = blanks = 0;
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks = blanks + 1;
            col = col + 1;
        } else {
            if (blanks == 1)
                putchar(' ');
            else if (blanks > 1) {
                numtabs = col/TABWIDTH - (col-blanks)/TABWIDTH;
                for (i = 0; i < numtabs; ++i)
                    putchar('\t');
                if (numtabs >= 1)
                    blanks = col - (col/TABWIDTH)*TABWIDTH;
                for (i = 0; i < blanks; ++i)
                    putchar(' ');
            }
            blanks = 0;
            putchar(c);
            col = col + 1;
            if (c == '\n')
                col = 0;
        }
    }
    return EXIT_SUCCESS;
}