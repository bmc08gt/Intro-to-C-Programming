/**
 * Program that will read file 'numbers.dat' which and locates all
 * prime numbers and places them each in a file 'primes.dat'
 *
 */
#include <stdio.h>
#include <string.h>

int primality(int n) {

   int m;

   for (m=2; m <= n/2; m++) {
       if ((n % m) == 0) {
           return 0;
       } else if (!(m < n/2)) {
           return 1;
       }
   }
}

int main(void) {

    char *tok;        /* Break down 'line' into tokens containing ea. int  */
    char line[8000];  /* Save numbers.dat in a char for use in primality() */
    FILE *fr,         /* File pointer for input and                        */
         *to;         /*     output                                        */

    fr = fopen("numbers.dat", "r"); /* Open numbers.dat for input          */
    to = fopen("prime.dat", "w");   /* Create and open prime.dat for output*/

    if (fr == NULL)
       printf("Cannot open numbers.dat for input.\n");

    if (to == NULL)
       printf("Cannot open prime.dat for output.\n");

    while (!feof(fr)) {
        fscanf(fr, "%s", line);
        tok = strtok(line, " ");
        while (tok != NULL) {
            int result = atoi(tok);
            tok = strtok(NULL, " ");
            if (primality(result) == 1) {
                fprintf(to, "%d\n", result);
            }
        }
    }
    fclose(fr); /* Close i/o for numbers.dat */
    fclose(to); /* Close i/o for prime.dat   */
    return (0);
}

