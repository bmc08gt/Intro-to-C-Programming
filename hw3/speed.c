/**
 * Interactive program to calculate the speed of sound based on
 * input of the current air temperature. Will continue until user
 * chooses to stop
 *
 */
#include <stdio.h>
#include <math.h>

double ask_for_air(void) {

    double air_temp; // User input current air temperature

    printf("Please enter the current air temperature(in Fahrenheit): ");
    fflush(stdin);
    scanf(" %lf", &air_temp);

    return air_temp;
}

int main(void) {

    double air_temp, speed_of_sound;
    char   ans = 'y';

    while (ans != 'n' && ans != 'N') {
       air_temp = ask_for_air(); //Get the current air temperature from the user

       speed_of_sound = 1086 * sqrt(((5 * air_temp) + 297) / 247);

       printf("The speed of sound at %.2f degrees Fahrenheit is %.2f ft/sec.\n", air_temp, speed_of_sound);
       printf("Would you like to calculate the speed of sound based on a different temperature?");
       fflush(stdin);
       scanf(" %c", &ans);
    }
    return(0);
}
