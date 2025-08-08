/*
============================================================================
============================================================================
[D] : Attempt the following questions

(b) :
In the digital world colors are specified in Red-Green-Blue (RGB) format, with the values of R, G, B varying on an integer scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format, with the values of C, M, Y and K varying on a real scale from 0.0 to 1.0. Write a program that converts RGB color to CMYK color as per the following formulae:

White = Max(Red/255, Green/255, Blue/255)

Cyan = ((White - Red) / 255) / (White)

Magenta = ((White - Green) / 255) / (White)

Yellow = ((White - Blue) / 255) / (White)

Black = 1 - White

Note that all RGB values are all 0, then thr CMY values are all 0 and K value is 1.
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    // input the values of R, G, B from the user
    int red = 0;
    int green = 0;
    int blue = 0;
    printf("enter the values for (r, g, b) : ");
    scanf("%d %d %d", &red, &green, &blue);

    // EDGE CASE : if the user enters values outside the defined range
    // i.e (0 - 255), then print a message and exit the program
    if ((red < 0 || red > 255) ||
        (green < 0 || green > 255) ||
        (blue < 0 || blue > 255))
    {
        printf("ERROR !! the colors a re not in their valid range\n");
        printf("valid range (0 - 255)\n");
        exit(EXIT_FAILURE);
    }

    // EDGE CASE : all the components of R, G, B are 0
    // sol : then the C, M, Y are all 0 and K = 1.0
    if (red == 0 && green == 0 && blue == 0)
    {
        printf("(r, g, b)    : (0, 0, 0)\n");
        printf("(C, M, Y, K) : (0, 0, 0, 1.0)\n");
    }
    else
    {
        // divide the R, G, B values by 255 to compute their equivalent
        // C, M, Y, K values
        double red_255 = red / 255.00;
        double green_255 = green / 255.00;
        double blue_255 = blue / 255.00;

        // find the max of the values to compute the value of
        // K in C, M, Y, K
        double white = fmax(fmax(red_255, green_255), blue_255);

        // compute the cyan (C) value
        double cyan = (white - red_255) / white;

        // compute the magenta (M) value
        double magenta = (white - green_255) / white;

        // compute the yellow (Y) value
        double yellow = (white - blue_255) / white;

        // compute the black (K) value
        double black = 1 - white;

        // print the R, G, B values
        printf("(r, g ,b)    : (%d, %d, %d)\n", red, green, blue);

        // print the C, M, Y, K values
        printf("(C, M, Y, K) : (%.2lf, %.2lf, %.2lf, %.2lf)\n", cyan, magenta, yellow, black);
    }

    // return
    return 0;
}
