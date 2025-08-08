/*
============================================================================
============================================================================
[G] : Attempt the following questions

(c) :
Write a program to receive values of latitude (L1, L2) and longitude 
(G1, G2), in degrees, of two places on the earth and output the distance (D)
between them in nautical miles. The formula for the distance if nautical miles is :

D = 3963 * cos_inv(sinL1 sinL2 + cosL1 cosL2 * cos(G2 - G1))
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    // input the latitude from the user (L1, L2)
    double L1 = 0.0000;
    double L2 = 0.0000;
    printf("enter (L1, L2) : ");
    scanf("%lf %lf", &L1, &L2);

    // input the longitude (G1, G2) from the user
    double G1 = 0.0000;
    double G2 = 0.0000;
    printf("enter (G1, G2) : ");
    scanf("%lf %lf", &G1, &G2);

    // convert them to radians as user will enter them in degrees but sin,
    // cos functions compute using radians
    L1 *= (M_PI / 180.0);
    L2 *= (M_PI / 180.0);
    G1 *= (M_PI / 180.0);
    G2 *= (M_PI / 180.0);

    // use the formula to compute the  the distance
    double sin_product = (sin(L1) * sin(L2));
    double cos_product = (cos(L1) * cos(L2));
    double delta_g = (cos(G2 - G1));

    double D = (3963) * (acos(sin_product + cos_product * delta_g));

    // print the latitude (L1, L2) in degrees
    printf("(L1, L2) : (%.4lf, %.4lf)\n", L1 * (180 / M_PI), L2 * (180 / M_PI));

    // print the longitude (G1, G2) in degrees
    printf("(G1, G2) : (%.4lf, %.4lf)\n", G1 * (180 / M_PI), G2 * (180 / M_PI));

    // print the distance between them
    printf("D : %.4lf\n", D);

    // return
    return 0;
}
