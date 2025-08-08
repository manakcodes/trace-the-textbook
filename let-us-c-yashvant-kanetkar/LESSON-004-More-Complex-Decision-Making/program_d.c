/*
============================================================================
============================================================================
[D] : Attempt the following questions

(d) :
The Body Mass Index (BMI) is defined as the ratio of the weight of a person
(in Kilograms) to the square of the height (in meters). Write a program that receives weight and height, calculates the BMI, and reports the BMI
category as per the following table

BMI category        BMI

starvation          < 15
anorexic            15.1 to 17.5
underweight         17.6 to 18.5
ideal               18.6 to 24.9
overweight          25 to 25.9
obese               30 to 30.9
morbidly obese      >= 40
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    // input the weight of the user in kilograms (kgs)
    double weight_in_kgs = 0.0000;
    printf("enter weight (in kgs) : ");
    scanf("%lf", &weight_in_kgs);

    // input the height of the user in meters (m)
    double height_in_meters = 0.0000;
    printf("enter height (in mts) : ");
    scanf("%lf", &height_in_meters);

    // EDGE CASE : user enters invalid weight or height
    // solution : print a message and exit the fn
    if (weight_in_kgs <= 0.00 || height_in_meters <= 0.00)
    {
        printf("ERROR !! invalid weight and height\n");
        exit(EXIT_FAILURE);
    }

    else
    {
        // compute the BMI
        double bmi = (weight_in_kgs) / (height_in_meters * height_in_meters);

        // print weight, height, BMI
        printf("weight : %.2lf\n", weight_in_kgs);
        printf("height : %.2lf\n", height_in_meters);
        printf("BMI    : %.2lf\n", bmi);

        // print a message according to the range of BMI
        if (bmi < 15.00)
        {
            printf("STARVATION\n");
        }

        else if (bmi >= 15.1 && bmi <= 17.5)
        {
            printf("ANOREXIC\n");
        }

        else if (bmi >= 17.6 && bmi <= 18.5)
        {
            printf("UNDERWEIGHT\n");
        }

        else if (bmi >= 18.6 && bmi <= 24.9)
        {
            printf("IDEAL\n");
        }

        else if (bmi >= 25 && bmi <= 25.9)
        {
            printf("OVERWEIGHT\n");
        }

        else if (bmi >= 30 && bmi <= 30.9)
        {
            printf("OBESE\n");
        }

        else
        {
            printf("MORBIDLY OBESE\n");
        }
    }
    // return
    return 0;
}