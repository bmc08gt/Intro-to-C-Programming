/**
 * Program that returns the min, max, and mean value from an array
 * of integers using a single external function outside main
 *
 */
#include <stdio.h>

void array_processing(int x[], int size, int *min, int *max, float *mean)
{
    /* Computes the minimum, and maximum elements of the array x,
       as well as the mean */
    int i = 0, sum = 0;
    *min = x[0];
    *max = x[0];

    for (i=0; i < size; i++) {
        sum += x[i];
    }

    for (i=0; i < size; i++) {
        if (x[i] <= *min) {
            *min = x[i];
        }
    }

    for (i=0; i < size; i++) {
        if (x[i] > *max) {
            *max = x[i];
        }
   }

   *mean = (1.0/size) * sum;

};

int main(void) {

    int data_ar[]={3, 5, 6, 7, 12, 3, 4, 6, 19, 23, 100,
                   3, 4, 2, 9, 43, 32, 45, 32, 2, 3, 2, 1};

    float mean;         /* mean initialization */
    float *p_mean;      /* and *p_mean declaration */
    int min, max;       /* Min/max initialization */
    int *p_min, *p_max; /* and *p_min, *p_max declaration */

    p_mean=&mean; /* initialization, p_mean-->mean */
    p_min=&min;   /*                 p_min-->min   */
    p_max=&max;   /*                 p_max-->max   */

    /* Grab size of array dynamically */
    int size = sizeof(data_ar) / sizeof(data_ar[0]);

    /* Feed array_processing the array and the size for computations */
    array_processing(data_ar, size, p_min, p_max, p_mean);

    printf("The mean is %f, min is %d, and the max is %d.\n", mean, min, max);

    return(0);
}
