/*
============================================================================
============================================================================
[G] : Attempt the following questions

(a) :
If a five-digit number is input through the keyboard, write a program to
calculate the sum of its digits. (Hint : Use the modulus operator %)
============================================================================
============================================================================
*/

#include "../../C-Utility/utility.h"

int main()
{
    // input a number from the user
    int n = 0;
    printf("enter a number : ");
    scanf("%d", &n);

    // EDGE CASE : user enters -ve numbers
    // sol : take the absolute value of the number entered by the user
    int num = abs(n);

    // init a var to store the sum of the digits
    int sum = 0;

    // init a var to store the last digit extracted from the number
    int LastDigit = 0;

    // till the number is not 0 repeat the loop
    while (num != 0)
    {
        // extract the last digit of the number by doing (mod 10)
        LastDigit = num % 10;

        // calculate the sum of the digits by repeatedly adding last digit
        // to the sum
        sum += LastDigit;

        // divide the number by 10 to remove its last digit
        num /= 10;
    }

    // if the number entered by the user is -ve then multiply the sum by -1
    if (n < 0)
    {
        sum *= -1;
    }

    // print the number entered by the user
    printf("number entered by the user : %d\n", n);

    // print the sum of the digits of the number
    printf("sum of the digits of the number : %d\n", sum);

    // return
    return 0;
}
