/*
============================================================================
============================================================================
[G] : Attempt the following questions

(b) :
Write a program to receive Cartesian co-ordinates (x, y) of a point and convert them into polar co-ordinates (r, Φ).

Hint : r = sqrt(x² + y²) and Φ = tan_inv(y / x)
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    // input the cartesian coordinates from the user
    double x = 0.0000;
    double y = 0.0000;
    printf("enter (x, y) : ");
    scanf("%lf %lf", &x, &y);

    // calculate the r-value of the polar coordinate
    double r = sqrt((x * x) + (y * y));

    // calculate the Φ-value of the polar coordinate
    double phi = atan2(y, x);

    // print cartesian coordinates
    printf("cartesian coordinates : \n(x, y) : (%.4lf, %.4lf)", x, y);

    // newline for readability
    printf("\n\n");

    // print the polar coordinates
    printf("polar coordinates : \n(r, Φ) : (%.4lf, %.4lf)\n", r, phi);

    // return
    return 0;
}
