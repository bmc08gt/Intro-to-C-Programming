/**
 * C program that reads a file 'cities.dat' to create a database
 * of a string array for manipulation and prints out results
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int ranking;
    char city_name[20];
    char state[2];
    int population;
    float percent_change;
} city_t;

void read_file(city_t *database) {

    /* Create file handler and open the file for reading */
    FILE *file = fopen("cities.dat", "r");

    if (file == NULL) {
        fprintf(stderr, "Error! Cannot open file 'citiess.dat'.");
        exit(0);
    }

    int ranking;
    char city_name[20];
    char state[2];
    int population;
    float percent_change;

    /* Read the file line-by-line until we hit EOF */
    int i=0;
    while (fscanf(file, "%d %s %s %d %f",
        &ranking, city_name, state, &population, &percent_change) != EOF) {

            database[i].ranking = ranking;
            strcpy(database[i].city_name, city_name);
            strcpy(database[i].state, state);
            database[i].population = population;
            database[i].percent_change = percent_change;

            i++;
   }
}

/* Print the elements of each entry in the database */
void print_database(city_t *database) {
    int i=0;
    for (i=0; i < 10; i++) {
        printf("The number %d ranked city is %s, %s and its population is %d people with %.2f%% change.\n",
                database[i].ranking, database[i].city_name, database[i].state,
                database[i].population, database[i].percent_change);
    }
}

int main(void) {
    /* Create the database */
    city_t database[10];
    /* Read the file contents by line */
    read_file(database);
    /* Print out the contents of each city */
    print_database(database);

    return(0);
}
