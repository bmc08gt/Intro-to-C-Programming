/*
 * Program to convert currency from USD to EURO.
 * Also will ask if user wants to convert another amount or exit
 */
#include <stdio.h>

#define USD_TO_EURO 0.79 // Currency conversion rate from USD to Euros

int main(void) {

    double usd,  // User inputted amount of US Dollars and cents
           euro; // Output of Euros

    char   ans;  // Memory for answer of Y/N question

    // If answer is 'y' loop back through
    while(ans != 'n' && ans != 'N') {
        // User input for US Dollar amihbt
        printf("Please enter the amount of USD that you want to convert to Euros> ");
        scanf("%lf", &usd);
        // Currency conversion: 1 USD is 0.79 Euros
        euro = usd * USD_TO_EURO;
        // Output of converted euro amount
        printf("%.2f USD equals %.2f Euros.\n", usd, euro);
        printf("Do you want to convert another amount (y/n)?");
        fflush(stdin);
        scanf(" %c", &ans);
    }
    return (0);
}
