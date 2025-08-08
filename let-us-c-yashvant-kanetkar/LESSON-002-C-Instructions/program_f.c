/*
============================================================================
============================================================================
[G] : Attempt the following questions

(f) :
Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    int c = 0;
    int d = 0;
    printf("enter (c, d) : ");
    scanf("%d %d", &c, &d);

    printf("\n");

    printf("original locations \n");
    printf("(%d, %d)\n", c, d);

    printf("\n");

    int swap = c;
    c = d;
    d = swap;

    printf("new locations \n");
    printf("(%d, %d)\n", c, d);

    // return
    return 0;
}
