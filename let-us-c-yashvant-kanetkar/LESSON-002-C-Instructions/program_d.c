/*
============================================================================
============================================================================
[G] : Attempt the following questions

(d) :
Wind-chill factor is the felt air temperature on exposed skin due to wind. The wind-chill temperature is always lower than the air temperature, and is calculated as per the formula:

wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v⁰˙¹⁶

where 't' is the temperature and 'v' is the wind velocity. Write a program to receive values of 't' and 'v' and calculate the wind chill factor (wcf).
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    // input the temperature from the user
    double t = 0.0000;
    printf("enter t : ");
    scanf("%lf", &t);

    // input the wind velocity from the user
    double v = 0.0000;
    printf("enter v : ");
    scanf("%lf", &v);

    // compute the wind chill factor (wcf)
    double wcf = (35.74) + (0.6215 * t) + (((0.4275 * t) - 35.75) * pow(v, 0.16));

    // print the temperature
    printf("t   : %.4lf\n", t);

    // print the wind velocity
    printf("v   : %.4lf\n", v);

    // print the wind chill factor
    printf("wcf : %.4lf\n", wcf);

    // return
    return 0;
}
