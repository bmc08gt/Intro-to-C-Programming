/*
 * Program that relies on user input of S or T(square of triangle)
 * For each choice the area will calculated
 */
#include <stdio.h>

int main(void) {

    char ans = 'y'; // Y/N for continue
    char shape;     // Either S or T to determine area of square or triangle

    double side,    // Side length of square
           height,  // Height of triangle
           base,    // Base of triangle
           area;    // Area of selected shape

    while (ans != 'n' && ans != 'N') {
        printf("Please enter the first letter of the shape type>");
        scanf(" %c", &shape);

        switch (shape) {
            // s: Square
            case 's':
            case 'S':
                    printf("Enter the side length of the square>");
                    scanf(" %lf", &side);
                    // Area calculation of square
                    area = side * side;
                    printf("The area of the square is %.2f.\n", area);
                    break;
            // t: Triangle
            case 't':
            case 'T':
                    printf("Enter the height and base of the triangle>");
                    scanf(" %lf %lf", &height, &base);
                    // Area calculation of triangle
                    area = (0.5 * base) * height ;
                    printf("The area of the triangle is %.2f.\n", area);
                    break;
            default:
                    printf("Invalid shape. Please enter s for square and t for triangle.\n");
                    break;
        }
        printf("Do you want to continue (y/n)?>");
        fflush(stdin);
        scanf(" %c", &ans);
        if (ans == 'y' || ans =='Y') {
             continue; // Continue back to beginning of while loop
        } else {
             break; // exit
        }

    }
    return (0);
}

