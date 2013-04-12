/*
 * Tool to calculate the area and circumfrence of circle
 */
#include <stdio.h>

#define PI 3.1415926539  /* Definition of pi constant */

int main(void) {

    double radius,   // Radius based on user input
           area,     // Calculated output of Area
           circ;     // Calculated output of Circumference

    /* User input for radius */
    printf("Please enter the radius of the circle: ");
    scanf("%lf", &radius);

    /* Conversion from radius to circumference and area */
    circ = 2 * PI * radius;
    area = PI * (radius * radius);

    /* Output */
    printf("The circumference of a circle with radius %.2f ft is equal to %.2f ft.\n", radius, circ);
    printf("The area of a circle with a radius %.2f ft is equal to %.2f ft.\n", radius, area);

    return (0);

}
