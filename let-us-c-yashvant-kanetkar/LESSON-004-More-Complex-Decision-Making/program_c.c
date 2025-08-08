/*
============================================================================
============================================================================
[D] : Attempt the following questions

(c) :
A certain grade of steel is graded according to the following conditions:

(i)   Hardness must be greater than 50.
(ii)  Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600

The grades are as follows:

- Grade is 10 if all three conditions are met
- Grade is 9 if conditions (i) and (ii) are met
- Grade is 8 if conditions (ii) and (iii) are met
- Grade is 7 if conditions (i) and (iii) are met
- Grade is 6 if one conditions is met
- Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness, carbon content, and tensile strength of the steel under the consideration and output the grade of steel.
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{

    // input hardness, carbon content, tensile strength from the user
    int hardness = 0;
    double carbon_content = 0.00;
    int tensile_strength = 0;
    printf("enter hardness, carbon content, tensile strength : ");
    scanf("%d %lf %d", &hardness, &carbon_content, &tensile_strength);

    // EDGE CASE : user entered -ve values
    // solution : print a message and exit the program
    if (hardness < 0 ||
        carbon_content < 0 ||
        tensile_strength < 0)
    {
        printf("INVALID INPUT !! \n");
        exit(EXIT_FAILURE);
    }

    // print a message according to each condition
    if (hardness > 50 &&
        carbon_content < 0.7 &&
        tensile_strength > 5600)
    {
        printf("GRADE 10\n");
    }

    else if (hardness > 50 && carbon_content < 0.7)
    {
        printf("GRADE 9\n");
    }

    else if (carbon_content < 0.7 && tensile_strength > 5600)
    {
        printf("GRADE 8\n");
    }

    else if (hardness > 50 && tensile_strength > 5600)
    {
        printf("GRADE 7\n");
    }

    else if (hardness > 50 ||
             carbon_content < 0.7 ||
             tensile_strength > 5600)
    {
        printf("GRADE 6\n");
    }

    else
    {
        printf("GRADE 5\n");
    }

    // return
    return 0;
}
