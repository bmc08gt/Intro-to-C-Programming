/*
 * Program to give user a multiple-choice question and 4 possible answers
 * and output the selected answer
 */
#include <stdio.h>

int main(void) {

    char a, b, c, d; // Available choices for answers to question
    char choice; // User selected answer

    // Initialize characters for answer choices
    a = 'a';
    b = 'b';
    c = 'c';
    d = 'd';

    // Output of question and possible answers
    printf("How many bits in 1 KB?\n");
    printf("(%c) 1,000 bits\n", a);
    printf("(%c) 1,024 bits\n", b);
    printf("(%c) 8,192 bits\n", c);
    printf("(%c) 100 bits\n", d);
    //  User input for their answer
    printf("Please select an answer from (%c) to (%c):", a, d);
    scanf("%c", &choice);

    // Output of selected answer
    printf("You selected answer (%c)\n", choice);

    return (0);

}
