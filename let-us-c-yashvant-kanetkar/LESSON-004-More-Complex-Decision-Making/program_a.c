/*
============================================================================
============================================================================
[D] : Attempt the following questions

(a) :
If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is an isosceles, an equilateral, a scalene or a right-angled triangle.
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{

    // input the 3 sides of the triangle from the user (a, b, c)
    int a = 0;
    int b = 0;
    int c = 0;
    printf("enter the tree sides of the triangle (a, b, c) : ");
    scanf("%d %d %d", &a, &b, &c);

    // EDGE CASE : user enters invalid dimensions
    // sol : print a message and exit the program
    if (!((a + b > c) &&
          (b + c > a) &&
          (a + c > b)))
    {
        printf("INVALID INPUT !! not a valid triangle\n");
        exit(EXIT_FAILURE);
    }

    // check if the triangle is a RIGHT ANGLED TRIANGLE
    if ((a * a + b * b == c * c) ||
        (b * b + c * c == a * a) ||
        (c * c + a * a == b * b))
    {
        printf("the triangle is RIGHT ANGLED\n");
    }

    // check if the triangle is an EQUILATERAL TRIANGLE
    else if (a == b && b == c)
    {
        printf("the triangle is EQUILATERAL\n");
    }

    // check if the triangle is an ISOSCELES TRIANGLE
    else if ((a == b) || (b == c) || (c == a))
    {
        printf("the triangle is ISOSCELES\n");
    }

    // the triangle is a SCALENE TRIANGLE
    else
    {
        printf("the triangle is SCALENE\n");
    }

    // return
    return 0;
}