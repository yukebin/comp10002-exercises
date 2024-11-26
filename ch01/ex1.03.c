/* Exercise 1.03: Mean of a set of numbers
 * based on Figure 1.2: A second C program -- reads and adds a set of values.
 * Kevin Yu, 2023
 */

#include <stdio.h>

int
main(int argc, char *argv[]) {
    int sum = 0; /* the running sum */
    int next;    /* the next value to be added */
    int n = 0;   /* the number of numbers that have been read in */

    /* get the numbers one by one */
    while (scanf("%d", &next) == 1) {
        sum = sum + next;
        n++;
    }

    double mean = (double) sum / n;

    /* and print their sum */
    printf("The sum of the numbers is %d\n", sum);
    printf("The mean of the numbers is %f\n", mean);
    return 0;
}