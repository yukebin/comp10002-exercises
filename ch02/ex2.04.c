/* Exercise 2.04: Bounds on numbers
 * Kevin Yu, 2023
 */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char *argv[]) {
	printf("ints    : %13d to %13d\n", INT_MIN, INT_MAX);
	printf("floats  : %13e to %13e\n", FLT_MIN, FLT_MAX);
	printf("doubles : %13e to %13e\n", DBL_MIN, DBL_MAX);

	return 0;
}