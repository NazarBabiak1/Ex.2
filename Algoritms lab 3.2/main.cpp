#include <stdio.h>
#include <conio.h>
#include "Operators.h"

int main()
{
    QUEUE Q = QUEUE();

    char c;

    MAKENULL(Q);

    c = _getch();

    while (c != '=') {

        ENQUEUE(c, Q);

        c = _getch();
    }

    DEQUEUE(Q);
    DEQUEUE(Q);
    ENQUEUE('<', Q);

    while (!EMPTY(Q)) {

        printf("%c,", FRONT(Q));

        DEQUEUE(Q);

    }

    printf("\n");
}
