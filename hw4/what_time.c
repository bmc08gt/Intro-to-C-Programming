/**
 * Program that converts seconds into hours, minutes, and remaining seconds
 *
 */
#include <stdio.h>
#include <math.h>

int HOURS_IN_DAY = 24;
int MINUTES_IN_HOUR = 60;
int SECONDS_IN_MINUTE = 60;

void can_i_have_time(unsigned long int seconds, int *hours,
                     int *minutes, int *rem_secs) {

    /* Grab seconds and convert to hours, minutes, and remaining seconds */

    *hours = seconds / 3600;   /* 3600 seconds == 1 hour                  */
    seconds %= 3600;           /* Set seconds to < one hour               */
    *minutes = seconds / 60;   /* 60 seconds == 1 minute                  */
    *rem_secs = seconds % 60;  /* Remaining seconds != to one full minute */
}

int main(void) {

    int rem_secs, minutes, hours;            /* Initialization -- rem_secs, minutes, hours       */
    int *p_rem_secs, *p_minutes, *p_hours;   /* Declaration of *p_rem_secs, *p_minutes, *p_hours */
    unsigned int seconds;                    /* Initialization of seconds -- unsigned b/c        */
                                             /*         seconds !< 0 and rangle is larger        */

    p_hours=&hours;       /*Initialize p_hours --> hours */
    p_minutes=&minutes;   /*           p_minutes --> minutes */
    p_rem_secs=&rem_secs; /*           p_rem_secs --> rem_secs */

    printf("Enter the time interval in complete seconds:\n");
    scanf(" %u", &seconds);

    /* Feed can_i_have_time() stored seconds for computation */
    can_i_have_time(seconds, p_hours, p_minutes, p_rem_secs);
    printf("%u seconds are equal to %d hours, %d minutes, and %d seconds.\n", seconds, hours, minutes, rem_secs);

    return(0);
}
