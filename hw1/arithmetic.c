/*
 * Simple program to take input of one integer and one real number
 * and perform various arithmetic equations to them
 */
#include <stdio.h>

int main(void) {

    int x_int;      // integer number
    double y_real;  // real number

    double sum,  // various arithmetic calculations
           product,
           quotient,
           remainder,
           expression;

    // Input of an integer and a real number with whitespace accounted for
    printf("Please enter an integer and a real number:");
    scanf("%d %lf", &x_int, &y_real);

    // Calculations
    sum = x_int + y_real;
    product = x_int * y_real;
    quotient = x_int / y_real;
    remainder = x_int % (int)y_real;
    expression = (x_int * 2) + (y_real / 7) * 8;

    // Output
    printf("--------------------------------------\n");
    printf(" x value          :       %d          \n", x_int);
    printf(" y value          :       %f          \n", y_real);
    printf(" sum              :       %f          \n", sum);
    printf(" product          :       %f          \n", product);
    printf(" quotient         :       %f          \n", quotient);
    printf(" remainder        :       %f          \n", remainder);
    printf(" expression       :       %f          \n", expression);
    printf("--------------------------------------\n");

    return (0);

}
