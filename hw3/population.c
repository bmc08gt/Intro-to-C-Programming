/**
 * Interactive program that calculates the predicted population
 * in Gotham City
 *
 */
#include <stdio.h>

int population(void) {

    int valid_year, year;
    char incorrect = 'y';

    while (incorrect !='n' && incorrect != 'N') {
        printf("Enter a year after 1990: ");
        scanf(" %d", &year);
        /* Only allow value greater than 1990 for predicted year */
        if (year < 1990) {
            printf("Please enter a year greater than 1990.\n");
            incorrect = 'y';
        } else {
            incorrect = 'n';
            return year;
        }
    }
}

int main(double projected) {

    int year, years_after_1990;

    year = population(); /* Initialize year with the returned year for population() */

    /* Static value for the population in 1990 */
    double POPULATION_1990 = 52.966;

    years_after_1990 = year - 1990;
    projected = POPULATION_1990 + ( 2.184 * years_after_1990);
    printf("Predicited Gotham City population for %d (in thousands) : %.3f\n", year, projected);
    return (0);
}
