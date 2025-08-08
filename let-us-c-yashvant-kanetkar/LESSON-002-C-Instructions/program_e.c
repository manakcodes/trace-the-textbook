/*
============================================================================
============================================================================
[G] : Attempt the following questions

(e) :
If value of an angle is input through the keyboard, write a program to print all its Trigonometric ratios.
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    // input the angle in radians from the user
    double theta_radians = 0.0000;
    printf("enter angle in radians : ");
    scanf("%lf", &theta_radians);

    // init a var to store the angle in degrees
    double theta_degrees = theta_radians * (180 / M_PI);

    // calculate all 6 trigonometric rations
    // sin, cos, tan, cosec, sec,cot
    double sin_theta = sin(theta_radians);
    double cos_theta = cos(theta_radians);
    double tan_theta = sin_theta / cos_theta;
    double cosec_theta = 1 / sin_theta;
    double sec_theta = 1 / cos_theta;
    double cot_theta = cos_theta / sin_theta;

    // print the angle in radians
    printf("theta (in radians) : %.4lf\n", theta_radians);

    // print the angle in degrees
    printf("theta (in degrees) : %.4lf\n", theta_degrees);
    printf("\n\nALL TRIGONOMETRIC RATIOS\n\n");

    // print all 6 trigonometric ratios in a formatted manner
    printf("sin(%.4lf)   or sin(%.4lf)      : %.4lf\n", theta_radians, theta_degrees, sin_theta);
    printf("cos(%.4lf)   or cos(%.4lf)      : %.4lf\n", theta_radians, theta_degrees, cos_theta);
    printf("tan(%.4lf)   or tan(%.4lf)      : %.4lf\n", theta_radians, theta_degrees, tan_theta);
    printf("cosec(%.4lf) or cosec(%.4lf)    : %.4lf\n", theta_radians, theta_degrees, cosec_theta);
    printf("sec(%.4lf)   or sec(%.4lf)      : %.4lf\n", theta_radians, theta_degrees, sec_theta);
    printf("cot(%.4lf)   or cot(%.4lf)      : %.4lf\n", theta_radians, theta_degrees, cot_theta);

    // return
    return 0;
}
