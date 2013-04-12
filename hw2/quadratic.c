/*
 * Program that executes the quadratic equation for three numbers from user input
 * and outputs answers for X1 and X2
 */
#include <stdio.h>
#include <math.h>

int main(void) {

    char ans = 'y'; // To continue or not with another equation

    double a, b, c, // coefficients of quadratic equation
           complex, // Can not use complex roots
           x1, x2;  // output of answer based on equation

    while (ans != 'n' && ans != 'N') {
        printf("Please enter the coefficients of the quadratic equation>");
        scanf(" %lf %lf %lf", &a, &b, &c);

        // First number cannot equal 0
        if (a == 0) {
            printf("In order to use the quadratic equation A can not equal %.0f.\n", a);
        }

        // The value under the square root cannot be negative
        complex = ((b * b) - (4 * a) * (c));
        if (complex < 0) {
            printf("In order to use the quadratic equation you may not use complex roots.\n");
        }

        // If above to dependencies are met, compute quadratic equation
        if (a != 0 && complex > 0) {
            x1 = (((-1 * b) + sqrt(complex)) / (2 * a));
            x2 = (((-1 * b) - sqrt(complex)) / (2 * a));

            printf("The roots of the quadratic are: x1=%.2f, x2=%.2f\n", x1, x2);
        }
        printf("Do you want to solve another quadratic equation (y/n)?>");
        fflush(stdin);
        scanf(" %c", &ans);
    }
    return (0);
}
